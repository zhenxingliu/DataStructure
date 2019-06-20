#include<stdio.h>
#include<stdlib.h>
#include"LinearStack1.h"
int main(int argc, char const *argv[])
{
    SSeqStack ss;//共享栈
    Init(&ss);
    int i,j;
    for(i=1;i<5;i++){
        if(Push(&ss,i,1)==0)
            printf("栈满，不能入栈%d\n", i);
    }
    for(j=9;j>1;j--){
        if(Push(&ss,j,2)==0){
            printf("栈满，不能入栈%d\n",j);
            break;
        }
    }
    return 0;
}
