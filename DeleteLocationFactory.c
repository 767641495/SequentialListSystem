#include "SeqList.c"

void DeleteLocationFactory(SeqList *pSeqList)
{
    int location;
    printf("	Please input a location to be deleted: ");
    location = Read(0, pSeqList->iSize - 1);
    int i;
    printf(GREEN "	The location of %d in the sequence list has been deleted: %d\n\n" NONE, location, pSeqList->pDatas[location]);
    pSeqList->iSize--;
    for (i = location; i < pSeqList->iSize; i++)
        pSeqList->pDatas[i] = pSeqList->pDatas[i + 1];
    Show(*pSeqList);
}