#ifndef _CustomString_LZX_H
#define _CustomString_LZX_H

/*顺序存储 ADT 数据结构 */
#define MaxLen 80
typedef struct CustomString
{
    char str[MaxLen];
    int length;
} SeqString;

//初始化
void StrAssign(SeqString *s,char cstr[]);

//判断是否为空
int StrEmpty(SeqString s);

//求串的长度
int StrLength(SeqString s);

//串的复制
void StrCopy(SeqString *t,SeqString s);

//比较大小
int StrCompare(SeqString s,SeqString t);

//在指定位置插入子串
int StrInsert(SeqString *s,int pos,SeqString t);

//删除子串
int StrDelete(SeqString *s,int pos,int len);

//串连接
int StrConcat(SeqString *t,SeqString s);

//清空串
void StrClear(SeqString *s);

#endif