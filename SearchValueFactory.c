#include "SeqList.c"

void SearchValueFactory(SeqList *pSeqList)
{
    printf("	Please input a number ∈ [0,1000000] to search:");
    int value = Read(0, 1000000);
    int location;
    for (location = 0; location < pSeqList->iSize; location++)
        if (pSeqList->pDatas[location] == value)
            break;
    if (location != pSeqList->iSize)
        printf(GREEN "	The location of %d in the sequence list is: %d\n\n" NONE, value, location);
    else
        printf(RED "	The location of %d in the sequence list is NULL!\n\n" NONE, value);
}