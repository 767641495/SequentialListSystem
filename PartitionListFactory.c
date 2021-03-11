#include "SeqList.c"

void PartitionListFactory(SeqList *pSeqList)
{
    printf("	The sequence before partition:");
    int value = Read(0, 1000000);
    printf(GREEN "	The sequence after partition by %d:\n\n" NONE,value);
    Show(*pSeqList);
    int i = 0;
    int lnum = 0;
    int rnum = 0;
    DataElem *left = (DataElem *)malloc(pSeqList->iSize * sizeof(DataElem));
    DataElem *right = (DataElem *)malloc(pSeqList->iSize * sizeof(DataElem));
    memset(left, 0, pSeqList->iSize);
    memset(left, 0, pSeqList->iSize);
    while(i<pSeqList->iSize)
    {
        if(pSeqList->pDatas[i]>=value)
            right[rnum++] = pSeqList->pDatas[i++];
        else
            left[lnum++] = pSeqList->pDatas[i++];
    }
    for (i = 0; i < rnum;i++)
        left[i+lnum] = right[i];
    free(pSeqList->pDatas);
    pSeqList->pDatas = left;
    printf(GREEN "	The sequence after partiton by %d:\n\n" NONE, value);
    Show(*pSeqList);
}