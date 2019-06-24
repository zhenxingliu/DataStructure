#include "LinearStack.h"
void Init(SeqStack *S){
    S->top = 0;
}
int IsEmpty(SeqStack S){
    return S.top==0 ? 1 : 0;
}
int GetTop(SeqStack S, ElementType *e){
    if(S.top<=0)
        return 0;
    *e = S.stack[S.top-1];
    return 1;
}
int Push(SeqStack *S, ElementType e){
    if(S->top>=StackSize)
        return 0;//栈满---上溢
    S->stack[S->top] = e;
    S->top++;
    return 1;
}
int Pop(SeqStack *S, ElementType *e){
    if(S->top==0)
        return 0;//空栈的话不可能有出栈，--下溢
    S->top--;//栈减1
    *e = S->stack[S->top];//出栈
    return 1;
}

int Length(SeqStack S){
    return S.top;
}


void Clear(SeqStack *S){
    S->top = 0;
}
