#include "SeqList.c"

void DeleteValueFactory(SeqList *pSeqList)
{
    int value;
    printf("	Please input a number ∈ [0,99] to be deleted: ");
    value = Read(0, 99);
    int cnt = 0;
    int i = 0;
    while (i < pSeqList->iSize)
    {
        if (pSeqList->pDatas[i] == value)
            cnt++;
        pSeqList->pDatas[i] = pSeqList->pDatas[i + cnt];
        i++;
    }
    printf(GREEN "	There are %d of %d deleted in the sequence list. \n\n" NONE, cnt, value);
    pSeqList->iSize -= cnt;
    Show(*pSeqList);
}