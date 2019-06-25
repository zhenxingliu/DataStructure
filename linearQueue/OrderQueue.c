#include"OrderQueue.h"

void InitQueue(SeqQueue *SCQ){
    SCQ->front=SCQ->rear = 0;
}

int QueueEmpty(SeqQueue SCQ){
    if(SCQ.front==SCQ.rear)
        return 1;
    else
        return 0;
}

//元素入队列
int EnQueue(SeqQueue *SCQ, DataType e){
    if(SCQ->front==(SCQ->rear+1)%QueueSize)
        return 0;//队列满
    SCQ->queue[SCQ->rear] = e;//在队尾插入元素
    SCQ->rear = (SCQ->rear+1)%QueueSize;
    return 1;
}

//元素出队列
int DeQueue(SeqQueue *SCQ, DataType *e){
    if(SCQ->front==SCQ->rear)
        return 0;//队列为空
    *e = SCQ->queue[SCQ->front];//出队列
    SCQ->front = (SCQ->front+1)%QueueSize;
    return 1;
}

int GetHead(SeqQueue SCQ, DataType *e){
    if(SCQ.front==SCQ.rear)
        return 0;
    *e = SCQ.queue[SCQ.front];
    return 1;
}

void ClearQeue(SeqQueue *SCQ){
    SCQ->front=SCQ->rear = 0;
}