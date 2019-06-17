#ifndef _LinearStack_H
#define _LinearStack_H
#define StackSize 100
typedef int ElementType;
typedef struct 
{
    ElementType stack[StackSize];
    int top[2];//共享栈指针
} LinearNode;
typedef LinearNode SSeqStack;
void Init(SSeqStack *S);
int  IsEmpty(SSeqStack S,int flag);
int GetTop(SSeqStack S,ElementType *e,int flag);
int Push(SSeqStack *S,ElementType e,int flag);
int Pop(SSeqStack *S,ElementType *e,int flag);
int  Length(SSeqStack S,int flag);
void Clear(SSeqStack *S,int flag);
#endif