#include "SeqList.c"

void SearchLocationFactory(SeqList *pSeqList)
{
    printf("	Please input a location[1,%d] to search:", pSeqList->iSize);
    int location = Read(1, pSeqList->iSize);
    printf(GREEN "	The value of %d in the sequence list is: %d\n\n" NONE, location, pSeqList->pDatas[location-1]);
}