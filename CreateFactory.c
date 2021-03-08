#include "SeqList.c"

void CreateFactory(SeqList *pSeqList)
{
    *pSeqList = Create(60);
    printf(GREEN "	The sequence list has been created and initiated by 60 random numbers:\n\n" NONE);
    Show(*pSeqList);
}