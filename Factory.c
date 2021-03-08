#include "Factory.h"

void Factory(SeqList *pSeqList, int option)
{
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
    case 5:
        SearchLocationFactory(pSeqList);
        break;
    case 6:
        SearchValueFactory(pSeqList);
        break;
    case 7:
        InsertLocationFactory(pSeqList);
        break;
    case 8:
        DeleteLocationFactory(pSeqList);
        break;
    case 9:
        DeleteValueFactory(pSeqList);
        break;
    case 10:
        DeleteDuplicateFactory(pSeqList);
        break;
    case 11:
        ReverseListFactory(pSeqList);
        break;
    case 12:
        PartitionListFactory(pSeqList);
        break;
    case 13:
        ImportFactory(pSeqList);
        break;
    case 14:
        ExportFactory(pSeqList);
        break;
    case 15:
        MaxPlatformFactory(pSeqList);
        break;
    case 16:
        ExitFactory(pSeqList);
        break;
    }
}