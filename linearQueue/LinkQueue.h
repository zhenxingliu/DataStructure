#ifndef _LinkQueue_H
#define _LinkQueue_H
typedef struct QNode
{
    DataType data;
    struct QNode *next;
} LQNode,*QueuePtr;

typedef struct {
    QueuePtr front;
    QueuePtr rear;
} LinkQueue;




#endif