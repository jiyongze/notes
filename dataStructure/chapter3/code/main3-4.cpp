// main3-4.cpp ѭ������ ����bo3-4.h��������
#include"c1.h"
typedef int QElemType;
#define MAX_QSIZE 5 
struct SqQueue
{
    QElemType *base;
    int front;
    int rear;   
};
#include"bo3-4.h"
#define ElemType QElemType
#include"func2-2.h"
int main()
{
    Status j;
    int i=0,m;
    QElemType d;
    SqQueue Q;
    InitQueue(Q);
    printf("��ʼ�����к󣬶��пշ�%u����1���գ�0����\n",QueueEmpty(Q));
    printf("���������ζ���Ԫ�أ�������%d������-1Ϊ��ǰ������:\n",MAX_QSIZE-1);
    do
    {
        scanf("%d",&d); 
        if(d==-1)
        {
           break;      
        }
        i++;
        EnQueue(Q,d);                                                                  
    }while(i<MAX_QSIZE-1);
    printf("���еĳ���Ϊ%d\n",QueueLength(Q));
    printf("���ڶ����е�Ԫ��Ϊ");
    QueueTraverse(Q, print);
    printf("����%d���ɶ�ͷɾ��Ԫ�أ���β����Ԫ�أ�\n", MAX_QSIZE);
    
    for(m=1;m<=MAX_QSIZE;m++)
    {
        DeQueue(Q,d);
        printf("ɾ����Ԫ����%d��������������Ԫ�أ�",d); 
        scanf("%d",&d);
        EnQueue(Q,d);                    
    } 
    m=QueueLength(Q);
    printf("���ڶ����е�Ԫ��Ϊ");
    QueueTraverse(Q, print);
    printf("�����β������%d��Ԫ�ء�", i+MAX_QSIZE);
    if(m-2>0)
    {
        printf("���ɶ�ͷɾ��%d��Ԫ��\n",m-2);     
    }
    while(QueueLength(Q)>2)
    {
        DeQueue(Q,d);
        printf("ɾ����Ԫ��Ϊ��%d\n",d);                   
    }
    j=GetHead(Q,d);
    if(j)
    {
        printf("���ڶ�ͷԪ��Ϊ%d\n", d);
    }
    ClearQueue(Q);
    printf("��ն��к󣬶��пշ�%u��1���� 0����\n", QueueEmpty(Q));
    DestroyQueue(Q);
    system("pause");
    return 0;
}
