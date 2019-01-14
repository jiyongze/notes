// algo3-3.cpp 行编辑程序，实现算法3.2
#include"c1.h"
typedef char SElemType;
#define STACK_INIT_SIZE 10
#define STACK_INCREMENT 2
struct SqStack
{
   SElemType *base; 
   SElemType *top; 
   int stacksize;     

};
#include"bo3-1.h" 
FILE *fp;
void copy(SElemType e)
{
     fputc(e,fp);
}
void LineEdit()
{
    SqStack s;
    char ch;
    InitStack(s); 
    printf("请输入一个文本文件，^Z结束输入:\n");
    ch=getchar();
    while(ch!=EOF)
    {
        while(ch!=EOF && ch!='\n')
        {
            switch(ch)
            {
                case '#':
                     if(!StackEmpty(s)) 
                         Pop(s,ch);  
                     break;
                case '@':
                     ClearStack(s); 
                     break;
                default:
                     Push(s,ch);                 
            }
            ch=getchar();          
        }
        StackTraverse(s,copy); 
        fputc('\n', fp);
        ClearStack(s);  
        if(ch!=EOF)
        {
            ch=getchar();        
        }       
    }
    DestroyStack(s);
}
int main()
{
    fp=fopen("ed.txt", "w");
    if(fp)
    {
        LineEdit();
        fclose(fp);  
    }
    else
    {
        printf("建立文件失败\n");
    }
   
    system("pause");
    return 0;
}
