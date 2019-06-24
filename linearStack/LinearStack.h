#ifndef _LinearStack_H
#define _LinearStack_H
#define StackSize 100
typedef int ElementType;
typedef struct 
{
    ElementType stack[StackSize];
    int top;
} LinearNode;
typedef LinearNode SeqStack;
void Init(SeqStack *S);
int  IsEmpty(SeqStack S);
int GetTop(SeqStack S,ElementType *e);
int Push(SeqStack *S,ElementType e);
int Pop(SeqStack *S,ElementType *e);
int  Length(SeqStack S);
void Clear(SeqStack *S);
#endif