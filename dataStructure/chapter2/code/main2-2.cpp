// main2-2.cpp ����bo2-2.h��������
#include"c1.h"
typedef int ElemType; 
 
typedef struct LNode
{
     ElemType data;
     LNode *next;   
}LNode,*LinkList;
#include"bo2-2.h"
#include"func2-2.h"
int main()
{
    LinkList L;
    ElemType e, e0;
    Status i;
    int j, k;

    InitList(L);
    for(j=1;j<=5;j++)
    {
        i=ListInsert(L,1,j); 
    }
    printf("��L�ı�ͷ���β���1-5��L=");
    ListTraverse(L,print);
    i=ListEmpty(L);
    printf("L�Ƿ�գ�i=%d(1:�ǣ�0:��)����L�ĳ���=%d\n",i,ListLength(L));
    ClearList(L);
    printf("��պ�L=");
    ListTraverse(L,print);
    i=ListEmpty(L);
    printf("L�Ƿ�գ�i=%d(1:�ǣ�0:��)����L�ĳ���=%d\n",i,ListLength(L));
    for(j=1; j<=10; j++)
    {
       ListInsert(L, j, j);      
    }
    printf("��L�ı�β���β���1��10��L=");
    ListTraverse(L, print);
    for(j=0; j<=1; j++)
    {
        k=LocateElem(L, j, equal);
        if(k)
        {
             printf("��%d��Ԫ�ص�ֵΪ%d\n", k, j);
        }
        else
        {
             printf("û��ֵΪ%d��Ԫ�أ�", j);
        }
     
    }
    for(j=1;j<=2;j++)
    {
        GetElem(L,j,e0);
        i=PriorElem(L, e0, e);
        if(i==ERROR)
          printf("Ԫ��%d��ǰ����", e0);
        else
          printf("Ԫ��%d��ǰ��Ϊ%d\n", e0, e);             
    }
   
    for(j=ListLength(L)-1; j<=ListLength(L); j++)
    { 
        GetElem(L, j, e0);
        i=NextElem(L, e0, e);
        if(i==ERROR)
          printf("Ԫ��%d�޺��\n", e0);
        else
          printf("Ԫ��%d�ĺ��Ϊ%d��", e0, e);
    }
    k=ListLength(L);
    
    //for(j=k+1;j>=k;j++)
//    {
//        i=ListDelete(L,j,e);     
//        if(i==ERROR)
//        {
//           printf("ɾ����%d��Ԫ��ʧ�ܣ������ڴ�Ԫ�أ�");         
//        }else
//        {
//           printf("ɾ����%d��Ԫ�سɹ�����ֵΪ%d",j,e);  
//        }          
//    }
    for(j=k+1; j>=k; j--)
      { i=ListDelete(L, j, e);
        if(i==ERROR)
          printf("ɾ����%d��Ԫ��ʧ�ܣ������ڴ�Ԫ�أ���", j);
        else
          printf("ɾ����%d��Ԫ�سɹ�����ֵΪ%d\n", j, e);
      }
    printf("�������L��Ԫ�أ�");
    ListTraverse(L, print);
    
    DestoryList(L);
    system("pause");
    return 0;
}