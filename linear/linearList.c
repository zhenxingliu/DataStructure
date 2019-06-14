/*
以顺序存储（内存）的线性表的基本数据结构，C语言实现
ADT
 */
#define MAXSIZE 20 //数组最大长充
typedef int ElemType; //数据元素
typedef struct LinearList//存储的数据结构
{
    ElemType data[MAXSIZE]; //线性表的存储位置，
    int length; //线性表的长度
}SqList;

//获取元素操作的返回值
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status;


Status InitList(SqList *L)
{
    return OK;
}

Status ListEmpty(SqList L){
    return OK;
}

Status ClearList(SqList L)
{
    return OK;
}

//获取操作
Status GetElem(SqList L,int i,ElemType *e){
    if(L.length==0 || i<1 || i>L.length)
        return ERROR;
    *e = L.data[i-1];
    return OK;
}


//插入操作
Status ListInsert(SqList L,int i,ElemType e){
    return OK;
}


//删除操作
Status ListDelete(SqList L,int i,ElemType  *e)
{
    return OK;
}

//返回线性表L的元素个数
int ListLength(SqList L)
{
    return L.length;
}




