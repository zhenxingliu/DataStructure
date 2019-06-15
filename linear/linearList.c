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
    int k;
    if(L.length==MAXSIZE) //线性表满
    {
        return ERROR;
    }
    if(i<1 || i>L.length)//需要插入的位置不对
    {
        return ERROR;
    }
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


//删除操作
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




