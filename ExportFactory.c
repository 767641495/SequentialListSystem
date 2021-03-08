#include "SeqList.c"

void ExportFactory(SeqList *pSeqList)
{
    FILE *fp;
    fp = fopen("listData.txt", "w");
    int i = 0;
    while (i < pSeqList->iSize)
    {
        int j = 0;
        while (j++ < 8 && i < pSeqList->iSize)
            fprintf(fp, "%-3d", pSeqList->pDatas[i++]);
        fprintf(fp, "\n");
    }
    fclose(fp);
    printf(GREEN "	Data output to the file success.\n\n" NONE);
    Show(*pSeqList);
}