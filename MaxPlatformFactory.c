#include "SeqList.c"

void MaxPlatformFactory(SeqList *pSeqList)
{
    int ans = 1;
    int cnt = 1;
    int i = 1;
    while (i < pSeqList->iSize)
    {
        if (pSeqList->pDatas[i] == pSeqList->pDatas[i - 1])
            cnt++;
        else
        {
            ans = cnt > ans ? cnt : ans;
            cnt = 1;
        }
        i++;
    }
    ans = cnt > ans ? cnt : ans;
    printf(GREEN "	The max platform is : %d\n\n" NONE, ans);
}