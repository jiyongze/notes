// algo3-1.cpp �����㷨3.1�ĳ���
#define N 8 //�����ת���Ľ��� N��2-9�� 
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
     printf("��ʮ��������ת��Ϊ%d�������������룺n(n>=0)=",N);
     scanf("%u",&n);
     while(n)
     {
          Push(s,n%N);  
          n=n/N; 
     }
     while(!StackEmpty(s))
     {
          Pop(s,e);
          printf("%d",e);                
     }
     printf("\n");
}
int main()
{
    
    conversion();
    system("pause");
    return 0;
}
