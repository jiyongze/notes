// main3-2.cpp ����bo3-2.h��������
#include"c1.h"
typedef int QElemType;
typedef struct QNode
{
    QElemType data;
    QNode *next;    
} *QueuePtr;
struct LinkQueue
{
    QueuePtr front,rear;   
};
#include"bo3-2.h"
#define ElemType QElemType
#include"func2-2.h"
int main()
{
    int i;
    QElemType d;
    LinkQueue q;
    InitQueue(q);
    printf("�ɹ��Ĺ�����һ���ն���\n");
    printf("�Ƿ�ն��У�%d(1:�ǣ�0:��)\n",QueueEmpty(q));
    printf("���еĳ���Ϊ%d\n",QueueLength(q));
    EnQueue(q,-5);
    EnQueue(q,5);
    EnQueue(q,10);
    printf("��������Ԫ�أ�-5,5,10���󣬶��еĳ���Ϊ%d\n",QueueLength(q));
    printf("�Ƿ�ն��У�%d(1:�ǣ�0:��)\n",QueueEmpty(q));
    printf("���е�Ԫ������Ϊ��");
    QueueTraverse(q,print); 
    i=GetHead(q,d);
    if(i==OK)
    {
         printf("��ͷԪ����%d\n",d);
    }
    DeQueue(q,d);
    printf("ɾ���˶�ͷԪ��%d\n��", d);
    i=GetHead(q,d);
    if(i==OK)
    {
         printf("�µĶ�ͷԪ����%d\n",d);
    }
    ClearQueue(q);
    printf("��ն��к�q.front=%u,q.rear=%u\n",q.front,q.rear);
    DestroyQueue(q);
    printf("���ٶ��к�q.front=%u,q.rear=%u\n",q.front,q.rear);
    system("pause");
    return 0;
}
