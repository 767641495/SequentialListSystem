#include "SeqList.c"

void InsertLocationFactory(SeqList *pSeqList)
{
    int location, number;
    printf("	Please input the location to be inserted: ");
    location = Read(1, pSeqList->iSize+1);
    location--;
    printf("	Please input a nunber ∈ [0,1000000] to be inserted: ");
    number = Read(0, 1000000);
    if (pSeqList->iLength < pSeqList->iSize + 1)
    {
        pSeqList->pDatas = (DataElem *)realloc(pSeqList->pDatas, (pSeqList->iSize + 10) * sizeof(DataElem));
        pSeqList->iSize++;
        pSeqList->iLength += 10;
    }
    int i;
    for (i = pSeqList->iSize - 1; i > location; i--)
        pSeqList->pDatas[i] = pSeqList->pDatas[i - 1];
    pSeqList->pDatas[location] = number;
    printf(YELLOW "	Insertion Success\n\n" NONE);
    Show(*pSeqList);
}