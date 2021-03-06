// main4-1.cpp 检验bo4-1.h的主程序
#include"c1.h"
// c4-1.h 串的定长顺序存储结构。在严书第73页
#define MAX_STR_LEN 40
typedef unsigned char SString[MAX_STR_LEN+1];
#include"bo4-1.h"
typedef SString String;
#include"func4-1.h"
int main()
{
    int i,j;
    Status k;
    char s,c[MAX_STR_LEN+1];
    SString t,s1,s2;
    printf("请输入串s1：");
    gets(c);
    k=StrAssign(s1,c);
    if(!k)
    {
        printf("串长超过MAX_STR_LEN（=%d）\n", MAX_STR_LEN);
        exit(OVERFLOW);  
    }
    printf("串长为%d，串空否？%d（1：是 0：否）\n", StrLength(s1), StrEmpty(s1));
    
    StrCopy(s2, s1);
    printf("复制s1生成的串为");
    StrPrint(s2);
    printf("请输入串s2：");
    gets(c);
    StrAssign(s2, c);
    i=StrCompare(s1,s2);
    if(i<0)
    {
        s='<';
    }
    else if(i==0)
    {
        s='=';
    }
    else
    {
        s='>';  
    }
    printf("串s1%c串s2\n", s);
    k=Concat(t,s1,s2);  
    printf("串s1连接串s2得到的串t为");
    StrPrint(t);
    if(k==FALSE)
    {
         printf("串t有截断\n");         
    }
    ClearString(s1);
    printf("清为空串后，串s1为");
    StrPrint(s1);
    printf("串长为%d，串空否？%d（1：是 0：否）\n", StrLength(s1), StrEmpty(s1));
    
    printf("求串t的子串，请输入子串的起始位置,子串长度：");
    scanf("%d,%d", &i, &j);
    k=SubString(s2, t, i, j);
    if(k)
    { 
        printf("子串s2为");
        StrPrint(s2);
    }
    printf("从串t的第pos个字符起，删除len个字符，请输入pos,len：");
    scanf("%d,%d", &i, &j);
    StrDelete(t, i, j);
    printf("删除后的串t为");
    StrPrint(t);
    i=StrLength(s2)/2;
    StrInsert(s2, i, t);
    printf("在串s2的第%d个字符之前插入串t后，串s2为", i);
    StrPrint(s2);
    i=Index1(s2, t, 1);
    printf("s2的第%d个字符起和t第一次匹配\n", i);
    i=Index(s2, t, 1);
    printf("s2的第%d个字符起和t第一次匹配\n", i);
    SubString(t, s2, 1, 1);
    printf("串t为");
    StrPrint(t);
    Concat(s1, t, t);
    printf("串s1为");
    StrPrint(s1);
    k=Replace(s2, t, s1);
    if(k)
    { 
       printf("用串s1取代串s2中和串t相同的不重叠的串后，串s2为");
       StrPrint(s2);
    }
    DestroyString(s2);
    system("pause");
    return 0;
}
