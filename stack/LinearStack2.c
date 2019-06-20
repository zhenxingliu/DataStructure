#include<stdlib.h>
#include"LinearStack2.h"
/*
栈的链表实现，栈可以无限空间，入栈出栈是O(1),求长度是O(n)
 */

//初始化链栈
void InitStack(LinkStack *top){
    *top = (LinkStack)malloc(sizeof(LStackNode));
    if((*top)==NULL)
        exit(1);//链表头结点分配失败
    (*top)->next = NULL; //分配成功，现在是空栈，将头结点的指针设置为空
}

int StackEmpty(LinkStack top){
    if(top->next==NULL)
        return 1;
    else
        return 0;
}

int PushStack(LinkStack top, ElementType e){
    LStackNode *p;
    p = (LStackNode *)malloc(sizeof(LStackNode));
    if(p==NULL){
        return 0;
    }
    p->data = e;
    p->next = top->next;
    top->next = p;
    return 1;
}

int PopStack(LinkStack top, ElementType *e){
   LStackNode *p;
   p = top->next;
   if(!p)
   {
       return 0;
   }
   *e = p->data;
   top->next = p->next;
   free(p);
   return 1;
}

int GetTop(LinkStack top, ElementType *e){
    LStackNode *p;
    p = top->next;
    if (!p)
    {
        return 0;
    }
    *e = p->data;
    return 1;
}

int StackLength(LinkStack top){
    LStackNode *p;
    int count = 0;
    p = top;
    while(p->next!=NULL){
        p = p->next;
        count++;
    }
    return count;
}

void DestroyStack(LinkStack top){
    LStackNode *p,*q;
    p = top;
    while(!p){
        q = p;
        p = p->next;
        free(q);
    }
}