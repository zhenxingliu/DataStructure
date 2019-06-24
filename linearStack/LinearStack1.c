#include "LinearStack1.h"

void Init(SSeqStack *S){
    S->top[0] = 0; //从数组开始处做为栈底
    S->top[1] = StackSize - 1; //从数据末尾处做为栈底
}

int  IsEmpty(SSeqStack S,int flag){
    switch (flag)
    {
    case 1:
        if(S.top[0]==0)
            return 0;
        break;
    case 2:
        if(S.top[1]==StackSize-1)
            return 0;
        break;
    default:
        break;
    }
    return 1;
}

int GetTop(SSeqStack S,ElementType *e,int flag){
    if(IsEmpty(S,flag)==1)
        return 0;//要取的是空栈，直接返回错误
    switch (flag)
    {
    case 1:
        *e = S.stack[S.top[0]-1];
        break;
    case 2:
        *e = S.stack[S.top[1]+1];
    default:
        break;
    }
    return 1;
}

int Push(SSeqStack *S,ElementType e,int flag){
    if(S->top[0]==S->top[1])
        return 0;//栈满
    switch (flag)
    {
    case 1:
        //入栈并且栈顶指针向前移动一位
        S->stack[S->top[0]++] = e;
        break;
    case 2:
        //入栈并且栈顶指针向前移动一位()
        S->stack[S->top[1]--] = e;
        break;
    default:
        break;
    }
    return 1;
}


int Pop(SSeqStack *S,ElementType *e,int flag){
    if(IsEmpty(*S,flag)==1)
        return 0;
    switch (flag)
    {
    case 1:
        //元素出栈并将栈顶指针后移一位
        *e = S->stack[--S->top[0]];
        break;
    case 2:
        *e = S->stack[++S->top[1]];
        break;
    default:
        break;
    }
    return 1;
}

int  Length(SSeqStack S,int flag){
    switch (flag)
    {
    case 1:
        return S.top[0];
        break;
    case 2:
        return StackSize - S.top[1];
    default:
        break;
    }
}

void Clear(SSeqStack *S,int flag){
    switch (flag)
    {
    case 1:
        S->top[0] = 0;
        break;
    case 2:
        S->top[1] = StackSize - 1;
    default:
        break;
    }
}