// main3-1.cpp ����bo3-1.h��������
#include"c1.h"
typedef int SElemType;
#define STACK_INIT_SIZE 10
#define STACK_INCREMENT 2
struct SqStack
{
   SElemType *base; 
   SElemType *top; 
   int stacksize;     

};
#include"bo3-1.h"
#define ElemType SElemType
#include"func2-2.h"
int main()
{
    int j;
    SqStack s;
    SElemType e;
    InitStack(s);
    for(j=1;j<=12;j++)
    {
        Push(s,j);              
    }
    printf("ջ��Ԫ������Ϊ:");
    StackTraverse(s, print);
    Pop(s, e);
    printf("������ջ��Ԫ��e=%d\n", e);
    printf("������ջ��Ԫ�غ�ջ��Ԫ������Ϊ:");
    StackTraverse(s, print);
    
    printf("ջ�շ�%d��1���� 0���񣩣�", StackEmpty(s));
    GetTop(s, e);
    printf("ջ��Ԫ��e=%d��ջ�ĳ���Ϊ%d\n", e, StackLength(s));
    
    ClearStack(s);
    printf("���ջ��ջ�շ�%d��1���� 0����\n", StackEmpty(s));
    
    DestroyStack(s);
    printf("����ջ��s.top=%u��s.base=%u��s.stacksize=%d\n", s.top, s.base,s.stacksize);
    system("pause");
    return 0;
}