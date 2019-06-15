#include<stdlib.h>
#include"Linear.h"

struct Node
{
    ElementType element;
    Position next;
};

/*链表是否为空 */
int IsEmpty(List L){
    return L->next == NULL;
}

int IsLast(Position P, List L){
    return P->next == NULL;
}

Position Find(ElementType X,List L){
    Position P;
    P = L->next;
    while(P!=NULL && P->element != X){
        P = P-> next;
    }
    return P;
}

void Delete(ElementType X,List L){
    Position P,TempCell;
    P = FindPrevious(X,L);
    if(!IsLast(P,L)){
        TempCell = P->next;
        P->next = TempCell->next;
        free(TempCell);
    }
}

Position FindPrevious(ElementType X, List L){
    Position P;
    P = L;
    while(P->next!=NULL && P->next->element!=X)
        P = P->next;
    return P;
}

void Insert(ElementType X,List L,Position P){
    Position TmpCell;
    TmpCell = malloc(sizeof(struct Node));
    if(TmpCell==NULL){
        FatalError("Out of space!!!");
    }
    TmpCell->element = X;
    TmpCell->next = P->next;
    P->next = TmpCell;
}

void DeleteList(List L){
    Position P,Tmp;
    P = L->next; //
    L->next = NULL; //把链表的指针置为空
    while (P!=NULL)
    {
        //P开始指向链表头，正常头不为空，而空链接是头的next为NULL
        Tmp = P->next;
        free(P);
        P = Tmp;
    }
}

