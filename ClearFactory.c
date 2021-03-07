#include "SeqList.c"

void ClearFactory(SeqList *pSeqList)
{
    *pSeqList = Create(0);
    printf(GREEN "	The current sequence list has been clear.\n\n" NONE);
}