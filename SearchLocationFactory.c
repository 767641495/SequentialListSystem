#include "SeqList.c"

void SearchLocationFactory(SeqList *pSeqList)
{
    printf("	Please input a location[0,%d] to search:", pSeqList->iSize);
    int location = Read(0, pSeqList->iSize - 1);
    printf(GREEN "	The value of %d in the sequence list is: %d\n\n" NONE, location, pSeqList->pDatas[location]);
}