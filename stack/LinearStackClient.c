#include<stdio.h>
#include "LinearStack.h"
int main(int argc, char const *argv[])
{
    SeqStack ss;
    int i;
    ElementType e;
    ElementType a[] = {1,2,3,4,5,6,7,8};
    Init(&ss);
    for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
        if(Push(&ss,a[i])==0)
        {
            printf("栈已满，不能再进栈");
            return 0;
        }
    }
    printf("依次出栈的元素是:");
    if(Pop(&ss,&e)==1){
        printf("%4d",e);
    }
    if (Pop(&ss, &e) == 1)
    {
        printf("%4d", e);
    }
    printf("\n");

    printf("当前栈顶元素是: ");
    if(GetTop(ss,&e)==0){
        printf("栈已空！");
        return 0;
    }
    printf("%4d",e);
    printf("\n");

    if(Push(&ss,9)==0){
        printf("栈已满，不能再进栈\n");
        return 0;
    }
    if (Push(&ss, 10) == 0)
    {
        printf("栈已满，不能再进栈\n");
        return 0;
    }
    printf("当前栈中元素个数是:%4d\n",Length(ss));
    printf("将栈中元素出栈，出栈的序列是:\n");
    while(!IsEmpty(ss)){
        Pop(&ss,&e);
        printf("%4d",e);
    }
    printf("\n");
    return 0;
}
