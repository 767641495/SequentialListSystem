#include "CreateFactory.c"
#include "ShowFactory.c"
#include "ClearFactory.c"
#include "SortFactory.c"

void WorkFactory(SeqList *pSeqList, int option)
{
    puts("");
    switch (option)
    {
    case -1:
        break;
    case 1:
        CreateFactory(pSeqList);
        break;
    case 2:
        ShowFactory(pSeqList);
        break;
    case 3:
        ClearFactory(pSeqList);
        break;
    case 4:
        SortFactory(pSeqList);
        break;
    }
}