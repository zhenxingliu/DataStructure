#include "LinearList.h"
//获取元素操作的返回值
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

Status InitList(SqList *L)
{
    L->length = 0;
}

Status ListEmpty(SqList L){
    if(L.length==0)
        return TRUE;
    else
        return FALSE;
}


Status ClearList(SqList *L)
{
    L->length = 0;
}

//获取操作O(1)
Status GetElem(SqList L,int i,ElemType *e){
    //如果线性表为空或读取元素位置不正确，返回错误，否则取元素并返回正确。
    if(L.length==0 || i<1 || i>L.length)
        return ERROR;
    *e = L.data[i-1];
    return OK;
}

//查找操作 返回是的元素在线性表中的序号O(n)
int LocateElem(SqList L, ElemType e)
{
    int k;
    int i = 0;
    for(k=0;k<L.length;k++)
    {
        if(L.data[k]==e){
            i = k+1;
            break;
        }
    }
    return i;//搜索到返回队列中的顺序，没有搜索到返回0
}

//插入操作 O(n)
Status ListInsert(SqList L,int i,ElemType e){
    int k;
    //如果表满就返回错误，
    if(L.length==MAXSIZE) //线性表满
    {
        return ERROR;
    }
    //插入位置不对，返回错误
    if(i<1 || i>L.length)//需要插入的位置不对
    {
        return ERROR;
    }
    //执行插入，插入时需要将从插入位置开始都向后移动一位。执行为O(n)
    if(i<L.length){
        //插入的位置不在队尾需要将所有从最后到i之间的元素都向后移动一个位置
        for(k=L.length-1;k>=i-1;k--){
            L.data[k+1] = L.data[k];
        }
    }
    L.data[i-1] = e; //插入新元素
    L.length++;
    return OK;
}


//删除操作 O(n)
Status ListDelete(SqList L,int i,ElemType  *e)
{
    if(L.length==0)
        return ERROR;//线性表为空不能执行删除操作
    if(i<1 || i>L.length)
        return ERROR; //要删除的元素位置不对返回错误
    //3.先获取需要删除的元素
    *e = L.data[i-1];
    int k;
    //4.将所有删除元素的元素向前移动一个位置
    for(k=i-1;k<L.length;k++)
    {
        //所有元素向前移动，覆盖掉i元素
        L.data[k] = L.data[k+1];
    }
    //5.表长度减1
    L.length--;
    return OK;
}

//返回线性表L的元素个数
int ListLength(SqList L)
{
    return L.length;
}




