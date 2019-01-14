// algo3-1.cpp 调用算法3.1的程序
#define N 8 //定义代转换的进制 N（2-9） 
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
     printf("将十进制整数转化为%d进制数，请输入：n(n>=0)=",N);
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
