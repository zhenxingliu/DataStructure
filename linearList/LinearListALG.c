#include<stdio.h>
#include"LinearList.h"

/*
分两端存放数据，要将一线性表的元素中，小于零的放左边，大于零的放右边，并且不能增加额外的存储空间
 */
void SplitSeqList(SqList *L){
    //要将一线性表的元素中，小于零的放左边，大于零的放右边，并且不能增加额外的存储空间
    //实现算法，定义两个指示器，一个从线性表的左边开始扫描，一个从线性表的右边开始扫描，当找到一个大于零的，i暂停，当找到一个小于零的j暂停，并交换i与j的元素。直到i>=j结束
    int i,j;
    ElemType e;
    i = 0;
    j = L->length-1;
    while(i<j){
        while(L->data[i]<=0)
            i++;
        while(L->data[j]>0)
            j--;
        if(i<j){
            e = L->data[i];
            L->data[i] = L->data[j];
            L->data[j] = e;
        }
    }
}

