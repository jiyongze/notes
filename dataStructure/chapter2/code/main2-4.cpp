#include"c1.h"
typedef int ElemType; 
#define MAX_SIZE 100
typedef struct 
{
   ElemType data;
   int cur;     
}component,SLinkList[MAX_SIZE];
#include"bo2-5.h"
#include"func2-2.h" 
typedef SLinkList LinkList; 
int main()
{
    LinkList L;
    ElemType e, e0;
    Status i;
    int j, k;
    InitList(L);
    for(j=1; j<=5; j++)
       i=ListInsert(L, 1, j);
    printf("��L�ı�ͷ���β���1��5��L=");
    ListTraverse(L, print);
    
    i=ListEmpty(L);
    printf("L�Ƿ�գ�i=%d��1���� 0���񣩣���L�ĳ���=%d\n", i, ListLength(L));
    ClearList(L);
    printf("���L��L=");
    ListTraverse(L, print);
    i=ListEmpty(L);
    printf("L�Ƿ�գ�i=%d��1���� 0���񣩣���L�ĳ���=%d\n", i, ListLength(L));
    
    system("pause");
    return 0;
}
