#include "SeqList.c"

void ShowFactory(SeqList *pSeqList)
{
    Show(*pSeqList);
    printf(GREEN "	The length of the sequence is: %d\n\n" NONE, pSeqList->iSize);
}