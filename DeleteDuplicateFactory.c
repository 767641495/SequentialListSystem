#include "SeqList.c"

void DeleteDuplicateFactory(SeqList *pSeqList)
{
    int Map[100];
    memset(Map, 0, sizeof(Map));
    int cnt = 0;
    int i = 0;
    while (i < pSeqList->iSize)
    {
        if (Map[pSeqList->pDatas[i]] == 0)
            Map[pSeqList->pDatas[i]] = 1;
        else
            cnt++;
        pSeqList->pDatas[i] = pSeqList->pDatas[i + cnt];
        i++;
    }
    printf(GREEN "	All the dunlenents have been deleted.\n\n" NONE);
    pSeqList->iSize -= cnt;
    Show(*pSeqList);
}