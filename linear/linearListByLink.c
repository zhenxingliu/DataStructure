#include<stdlib.h>
/*
线性表单链表数据结构
 */
typedef int ElemType;
//获取元素操作的返回值
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status;
typedef struct Node
{
    ElemType data;
    Node *next;
} Node;
typedef struct Node *LinkedList;

/*
线性表以链式单链表存储结构时读取操作
 */
Status GetElem(LinkedList L,int i,ElemType *e)
{
    int j;//计数器
    Node *p;
    p = L->next;//指向第一个元素，这个L是有头指针,没有next，应该指向第二个元素？
    j = 1;
    while (p && j<i)
    {
        p = p->next;
        ++j;
    }
    if(!p || j>i)
        return ERROR;//找到了单链表尾或找过了位置也没有找到i，说明给定的位置不正确
    *e = p->data;//找到
    return OK;
}


Status ListInsert(LinkedList L,int i,ElemType e)
{
    //1.要查找插入的位置的前一个元素
    int j;//计数器
    LinkedList p,s;
    p = L->next;
    j=1;
    while (p && j<i)
    {
        p = p->next;
        ++j;
    }
    if(!p || j>i)
        return ERROR;//没有找到插入的位置
    //2.否则找到了，创建一个s节点的Node
    s = (LinkedList)malloc(sizeof(Node));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return OK;
}

