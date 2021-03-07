#include "SeqList.c"

int AscendCmp(const void *a, const void *b);  //升序函数
int DescendCmp(const void *a, const void *b); //降序函数

void SortFactory(SeqList *pSeqList)
{
    printf("	Press ENTER to sort in ascending order. Others for descending order:\n\n");
        fflush(stdin);
        char ch = getch();
        if ((int)ch == 13)
        {
            qsort(pSeqList->pDatas, pSeqList->iSize, sizeof(DataElem), AscendCmp);
            printf(GREEN "	The sorted list in ascending order is:\n\n" NONE);
        }
        else
        {
            qsort(pSeqList->pDatas, pSeqList->iSize, sizeof(DataElem), DescendCmp);
            printf(GREEN "	The sorted list in descending order is:\n\n" NONE);
        }
        Show(*pSeqList);
}

int AscendCmp(const void *a, const void *b) //升序函数
{
    int *m = (int *)a; //将指针a强制转化为int 指针类型。
    int *n = (int *)b;
    return *m - *n; //对指向的值的大小进行比较
}

int DescendCmp(const void *a, const void *b) //降序函数
{
    int *m = (int *)a; //将指针a强制转化为int 指针类型。
    int *n = (int *)b;
    return *n - *m; //对指向的值的大小进行比较
}