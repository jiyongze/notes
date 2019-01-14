// algo3-5.cpp ���ʽ��ֵ�������ֵ��0��9֮�䣬�м����������ֵ��-128��127֮�䣩��
// �㷨3.4
typedef int SElemType;
#include"c1.h"
#define STACK_INIT_SIZE 10 
#define STACK_INCREMENT 2 
struct SqStack 
{ 
    SElemType *base; 
    SElemType *top; 
    int stacksize; 
};
#include"bo3-1.h"
#include"func3-1.h"
//�������ʽ��ֵ����������㷨����OPTR��OPND�ֱ�Ϊ�����ջ��������ջ 
SElemType EvaluateExpression()
{
    SqStack OPTR,OPND; 
    SElemType a,b,c,x;
    InitStack(OPTR);
    InitStack(OPND);
    Push(OPTR,'\n');
    c=getchar();
    GetTop(OPTR,x);
    while(c!='\n' || x!='\n')
    {
        if(In(c))
        {
            switch(Precede(x,c))
            {
               case '<' : Push(OPTR,c); 
                          c=getchar();
                          break; 
               case '=' : Pop(OPTR,x);
                          c=getchar();
                          break;
               case '>' : Pop(OPTR,x);
                          Pop(OPND,b);
                          Pop(OPND,a);
                          Push(OPND,Operate(a,x,b));           
            }
        }
        else if(c>='0' && c<='9')
        {
            Push(OPND,c-48);
            c=getchar();
        }
        else
        {
            printf("���ַǷ��ַ�\n");
            exit(OVERFLOW);
        }
        GetTop(OPTR,x);          
    }
    Pop(OPND,x);
    if(!StackEmpty(OPND))
    {
         printf("���ʽ����ȷ\n");
         //exit(OVERFLOW);                 
    }
    return x;
         
}
int main()
{
     printf("�������������ʽ�������ֵҪ��0��9֮�䡢");
     printf("�м�����ֵ����������-128��127֮�䣩\n");
     printf("%d\n", EvaluateExpression());
    system("pause");
    return 0;
}
