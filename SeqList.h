#ifndef SeqList_H
#define SeqList_H

#include "HeadFile.h"

typedef int DataElem;

typedef struct SeqList
{
    DataElem *pDatas; //存放元素表的缓冲区指针
    int iSize;        //缓冲区大小
} SeqList;

SeqList Create(int iSize);                       //创建顺序表
void Show(SeqList pSeqList);                     //显示顺序表
void Clear(SeqList *pSeqList);                   //清空顺序表
void Sort(SeqList *pSeqList);                    //顺序表排序
DataElem SearchByPos(SeqList pSeqList, int pos); //通过位置查找元素
DataElem SearchByVal(SeqList pSeqList, int val); //通过值查找元素
void InsertByPos(SeqList *pSeqList, int pos);    //指定位置插入元素
void DeleteByPos(SeqList *pSeqList, int pos);    //删除指定位置元素
void DeleteByVal(SeqList *pSeqList, int val);    //删除指定值元素
void DeleteDuplicate(SeqList *pSeqList);         //删除重复元素
SeqList Reverse(SeqList *pSeqList);              //置逆顺序表
SeqList Partition(SeqList *pSeqList);            //划分顺序表
void ImportFromFile(SeqList *pSeqList);          //从文件中导入
void ExportToFile(SeqList pSeqList);             //导出到文件
DataElem MaxPlatform(SeqList pSeqList);          //求最大平台(最多连续相等的数)
void Exit();                                     //退出程序

#endif