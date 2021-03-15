#include "SeqList.c"

void DeleteLocationFactory(SeqList *pSeqList)
{
    int location;
    printf("	Please input a location to be deleted: ");
    location = Read(1, pSeqList->iSize);
    location--;
    printf(GREEN "	The location of %d in the sequence list has been deleted: %d\n\n" NONE, location, pSeqList->pDatas[location]);
    DeleteLocation(pSeqList, location);
    Show(*pSeqList);
}