#include"CustomString.h"

//初始化
void StrAssign(SeqString *s,char cstr[]){
    int i=0;
    for(i=0;cstr[i]!='\0';i++){
        s->str[i] = cstr[i];
    }
    s->length = i;
}

//判断是否为空
int StrEmpty(SeqString s){
    if(s.length==0){
        return 1;
    }else
    {
        return 0;
    }
    
}

//求串的长度
int StrLength(SeqString s){
    return s.length;
}

//串的复制
void StrCopy(SeqString *t,SeqString s){
    int i=0;
    for(i=0;s.str[i]!='\0';i++){
        t->str[i] = s.str[i];
    }
    t->length = i;
}

//比较大小
int StrCompare(SeqString s,SeqString t){
    int i;
    for(i=0;i<s.length&&i<t.length;i++){
        if(s.str[i]!=t.str[i])
            return (s.str[i]-t.str[i]);
    }
    return (s.length-t.length);
}

//在指定位置插入子串
int StrInsert(SeqString *s,int pos,SeqString t){
    int i;
    if(pos<0 || pos-1>s->length){
        return 0;//插入的位置不正确返回0
    }
    if(s->length+t.length<=MaxLen){
        for(i=s->length+t.length-1;i>=pos+t.length-1;i--)
            s->str[i] = s->str[i-t.length];
        /*将串t插入到s中 */
        for(i=0;i<t.length;i++){
            s->str[pos+i-1] = t.str[i];
        }
        s->length = s->length+t.length;
        return 1;
    }else if(pos+t.length<=MaxLen){
        for(i=MaxLen-1;i>t.length+pos-1;i--)
            s->str[i] = s->str[i-t.length];
        for(i=0;i<t.length;i++)
            s->str[i+pos-1] = t.str[i];
        s->length = MaxLen;
        return 0;
    }else{
        for(i=0;i<MaxLen-pos;i++){
            s->str[i+pos-1] = t.str[i];
        }
        s->length = MaxLen;
        return 0;
    }
}

//删除子串
int StrDelete(SeqString *s,int pos,int len){
    int i;
    if(pos<0 || len <0 || pos+len-1>s->length){
        return 0;
    }
    else
    {
        for(i=pos+len;i<=s->length-1;i++)
            s->str[i-len] = s->str[i];
        s->length=s->length-len;
        return 1;
    }
}

//串连接
int StrConcat(SeqString *t,SeqString s){
    int i,flag;
    if(t->length+s.length<=MaxLen){
        for(i=t->length;i<t->length+s.length;i++)
            t->str[i] = s.str[i-t->length];
        t->length = t->length+s.length;
        flag = 1;
    }else if(t->length<MaxLen){
        for(i=t->length;i<MaxLen;i++)
            t->str[i] = s.str[i-t->length];
        t->length = MaxLen;
        flag = 0;
    }
    return flag;
}

//清空串
void StrClear(SeqString *s){
    s->length = 0;
}