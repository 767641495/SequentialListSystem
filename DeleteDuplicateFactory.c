#include "SeqList.c"

void DeleteDuplicateFactory(SeqList *pSeqList)
{
    int *Map;
    Map = (DataElem *)malloc(100 * sizeof(DataElem));
    int MapLength = 100;
    int i = 0;
    while (i < 100)
        Map[i++] = 0;
    int cnt = 0;
    i = 0;
    while (i < pSeqList->iSize)
    {
        if (pSeqList->pDatas[i] >= MapLength)
        {
            Map = (DataElem *)realloc(Map, (pSeqList->pDatas[i] + 1) * sizeof(DataElem));
            while(MapLength != pSeqList->pDatas[i] + 1)
            {
                Map[MapLength] = 0;
                MapLength++;
            }
        }
        if (Map[pSeqList->pDatas[i]] == 0)
            Map[pSeqList->pDatas[i++]] = 1;
        else
            DeleteLocation(pSeqList, i);
    }
    printf(GREEN "	All the dunlenents have been deleted.\n\n" NONE);
    pSeqList->iSize -= cnt;
    Show(*pSeqList);
}