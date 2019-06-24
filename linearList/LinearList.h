/*
以顺序存储（内存）的线性表的基本数据结构，C语言实现
ADT

 */
#ifndef _LinearList_H
#define _LinearList_H
//数据的存储结构
#define MAXSIZE 20 //数组最大长度
typedef int ElemType; //数据元素别名，这里使用int做为存储的数据元素
typedef struct LinearList//存储的数据结构
{
    ElemType data[MAXSIZE]; //线性表的存储位置
    int length; //线性表的长度
}SqList;

//数据的操作返回标志
typedef int Status;
//初始化线性表
Status InitList(SqList *L);
//判断线性表是否为空，为空返加1，不为空返回0
Status ListEmpty(SqList L);
//清空线性表
Status ClearList(SqList *L);
//获取一个元素
Status GetElem(SqList L, int i, ElemType *e);
//查找操作
int LocateElem(SqList L, ElemType e);
//插入操作
Status ListInsert(SqList L, int i, ElemType e);
//删除操作
Status ListDelete(SqList L, int i, ElemType *e);
//返回线性表L的元素个数
int ListLength(SqList L);

#endif