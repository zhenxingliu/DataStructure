#include<stdio.h>
#include"LinearStack2.h"

void Coversion(int N){
    LinkStack top,p;
    InitStack(&top);
    int e;
    do{
        e = N%8;//等于除8的余数
        //入栈
        PushStack(top,e);
        N = N/8;//N等于N除8的商
    }while(N!=0);
    //出栈
    while(StackEmpty(top)==0){
        PopStack(top,&e);
        printf("%d",e);
    }
}

int main(int argc, char const *argv[])
{
    int n;
    printf("请输入一个十进制数:\n");
    scanf("%d",&n);
    printf("转换后的八进制数为:\n");
    Coversion(n);
    return 0;
}
