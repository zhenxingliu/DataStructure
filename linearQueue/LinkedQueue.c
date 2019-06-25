#include <stdlib.h>
#include "LinkedQueue.h"


/*
链式队列ADT实现
1.这个是带有链表头的链式队列
 */

/*初始化链表，建立头节点，队头和队尾指针都指向头节点，头节点的next为NULL */
void InitQueue(LinkedQueue *LQ){
    LQ->front=LQ->rear=(LQNode*)malloc(sizeof(LQNode));
    if(LQ->front==NULL) exit(1);//分配失败，退出
    LQ->front->next=NULL; //将头节点的next置为空
}

/*如果头指针和尾指针指向相同，队列为空*/
int QueueEmpty(LinkedQueue LQ){
    if(LQ.front==LQ.rear)
        return 1;
    else 
        return 0;
}

/*元素入队列， */
int EnQueue(LinkedQueue *LQ, DataType e){
    //建立新节点
    LQNode *s;
    s = (LQNode *)malloc(sizeof(LQNode));
    if(!s) exit(-1);//出错退出
    s->data = e;//给节点赋值
    s->next = NULL; //节点在最尾部
    LQ->rear->next = s; //将结节点链接到队列尾
    LQ->rear = s; //队尾指针指向新节点
    return 1;
}

int DeQueue(LinkedQueue *LQ, DataType *e){
    LQNode *s;
    if(LQ->front==LQ->rear)
        return 0;
    else
    {
        s = LQ->front->next; //待出队列的节点
        *e = s->data; //取数据
        LQ->front->next = s->next; //头指针指向下一节点
        if(LQ->rear==s) LQ->rear=LQ->front; //如果头和尾相同，那相等，队列为空。
        free(s);//释放该节点
        return 1;
    }
    
}

int GetHead(LinkedQueue LQ, DataType *e){
    LQNode *s;
    if(LQ.front==LQ.rear)
        return 0;
    else
    {
         s = LQ.front->next;
         *e = s->data;
         return 1;
    }
    
}

void ClearQueue(LinkedQueue *LQ){
    while (LQ->front!=NULL)
    {
        LQ->rear = LQ->front->next;
        free(LQ->front);
        LQ->front = LQ->rear;
    }
    
}
