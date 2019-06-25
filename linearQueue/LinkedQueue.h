#ifndef _LinkedQueue_H
#define _LinkedQueue_H
typedef int DataType;
typedef struct QNode
{
    DataType data;
    struct QNode *next;
} LQNode,*QueuePtr;

typedef struct {
    QueuePtr front;
    QueuePtr rear;
} LinkedQueue;

void InitQueue(LinkedQueue *LQ);

int QueueEmpty(LinkedQueue LQ);

int EnQueue(LinkedQueue *LQ,DataType e);

int DeQueue(LinkedQueue *LQ,DataType *e);

int GetHead(LinkedQueue LQ,DataType *e);

void ClearQueue(LinkedQueue *LQ);


#endif