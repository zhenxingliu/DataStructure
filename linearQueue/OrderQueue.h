#ifndef _OrderQueue_H
#define _OrderQueue_H
#define QueueSize 60
typedef int DataType;
typedef struct OrderQueue
{
    DataType queue[QueueSize];
    int front,rear;
} SeqQueue;
void InitQueue(SeqQueue *SCQ);

int QueueEmpty(SeqQueue SCQ);

int EnQueue(SeqQueue *SCQ,DataType e);

int DeQueue(SeqQueue *SCQ,DataType *e);

int GetHead(SeqQueue SCQ,DataType *e);

void ClearQeue(SeqQueue *SCQ);

#endif