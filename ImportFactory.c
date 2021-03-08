#include "SeqList.c"

void ImportFactory(SeqList *pSeqList)
{
    FILE *fp;
    fp = fopen("listData.txt", "r");
    int cnt = 0;
    int num = 0;
    pSeqList->iSize = 0;
    while (fscanf(fp, "%d", &num) != EOF)
    {
        if (cnt + 1 > pSeqList->iLength)
        {
            pSeqList->pDatas = (DataElem *)realloc(pSeqList->pDatas, (pSeqList->iSize + 10) * sizeof(DataElem));
            pSeqList->iLength += 10;
        }
        pSeqList->pDatas[cnt++] = num;
        pSeqList->iSize++;
    }
    fclose(fp);
    printf(GREEN "	Data imported from the “listData.txt” success.\n\n" NONE);
    Show(*pSeqList);
}