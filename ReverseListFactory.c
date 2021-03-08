#include "SeqList.c"

void ReverseListFactory(SeqList *pSeqList)
{
    printf(GREEN "	The sequence before inversion is:\n\n" NONE);
    Show(*pSeqList);
    DataElem *a = (DataElem *)malloc(pSeqList->iSize * sizeof(DataElem));
    int i = 0;
    while(i<pSeqList->iSize)
    {
        a[i] = pSeqList->pDatas[pSeqList->iSize - i - 1];
        i++;
    }
    free(pSeqList->pDatas);
    pSeqList->pDatas = a;
    printf(GREEN "	The sequence after inversion is:\n\n" NONE);
    Show(*pSeqList);
}