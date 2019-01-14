// algo3-2.cpp 修改算法3.1，十进制→十六进制
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
//对于输入的任意一个非负十进制整数，打印输出与其等值的N进制数 
void conversion()
{
     SqStack s;
     unsigned n;
     SElemType e;
     InitStack(s);
     printf("将十进制整数转化为十六进制数，请输入：n(n>=0)=");
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

