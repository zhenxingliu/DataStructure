#ifndef _LinearStack2_H
#define _LinearStack2_H
typedef int ElementType;
//声明了一个LinearNode结构，并有一个LStackNode标签，和一个此结构的LinkStack指针
typedef struct LinearNode
{
    ElementType data;
    struct LinearNode * next;
} LStackNode, * LinkStack;

//初始化链栈
void InitStack(LinkStack *top);

int StackEmpty(LinkStack top);

int PushStack(LinkStack top,ElementType e);

int PopStack(LinkStack top,ElementType *e);

int GetTop(LinkStack top,ElementType *e);

int StackLength(LinkStack top);

void DestroyStack(LinkStack top);

#endif