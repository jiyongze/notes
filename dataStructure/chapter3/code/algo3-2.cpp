// algo3-2.cpp �޸��㷨3.1��ʮ���ơ�ʮ������
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
//�������������һ���Ǹ�ʮ������������ӡ��������ֵ��N������ 
void conversion()
{
     SqStack s;
     unsigned n;
     SElemType e;
     InitStack(s);
     printf("��ʮ��������ת��Ϊʮ���������������룺n(n>=0)=");
     scanf("%u",&n);
     while(n)
     {
          Push(s,n%16);  
          n=n/16; 
     }
     while(!StackEmpty(s))
     {
          Pop(s,e);
          if(e<=9)
          {
               printf("%d",e);    
          } 
          else
          {
               printf("%c",55+e);  
          }
                         
     }
     printf("\n");
}
int main()
{
    
    conversion();
    system("pause");
    return 0;
}

