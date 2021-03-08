#ifndef SeqList_C
#define SeqList_C
#include "SeqList.h"

SeqList Create(int iSize) //创建顺序表,以0~99填充
{
    SeqList list;
    list.pDatas = (DataElem *)malloc(iSize * sizeof(DataElem));
    list.iSize = iSize;
    if (list.pDatas == NULL)
        list.iSize = 0;
    srand(time(NULL));
    int i;
    for (i = 0; i < iSize; i++)
        list.pDatas[i] = rand() % 100;
    list.iLength = iSize;
    return list;
}

void Show(SeqList pSeqList) //显示顺序表
{
    int i = 0;
    while (i < pSeqList.iSize)
    {
        int j = 0;
        printf("	");
        while (j++ < 8 && i < pSeqList.iSize)
            printf("%-8d", pSeqList.pDatas[i++]);
        puts("");
    }
    puts("");
}

#endif