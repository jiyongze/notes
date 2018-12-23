#include"c1.h"
typedef int ElemType;
#define LIST_INIT_SIZE 10
#define LIST_INCREMENT 2
struct SqList
{
    ElemType *elem;
    int length;
    int listsize;   
};
#include"bo2-1.h"
#include"func2-2.h"
int main()
{
    SqList L;
    ElemType e,e0;
    Status i;
    int j,k;
    InitList(L);
    printf("��ʼ��L��L.length=%d,L.listsize=%d,L.elem=%u\n",L.length,L.listsize,L.elem);

    for(j=1;j<=5;j++)
    {
        i=ListInsert(L,1,j);             
    }
    printf("��L�ı�ͷ���β���1-5��*L.elem=");
    for(j=1;j<=5;j++)
    {
         printf("%d ",*(L.elem+j-1));
    }
    printf("\n����ListTraverse�������������L�е�Ԫ�أ�");
    ListTraverse(L,print1); 
    i=ListEmpty(L);
    printf("L.length=%d,L.listsize=%d(����)\n",L.length,L.listsize);
    printf("L.elem=%u(����),L�Ƿ��i=%d\n",L.elem,i);
    ClearList(L); 
    i=ListEmpty(L);
    printf("���L��L.length=%d,L.listsize=%d(����)",L.length,L.listsize);
    printf("L.elem=%u(����),L�Ƿ��i=%d(1���ǣ�2����)\n",L.elem,i);
    for(j=1;j<=10;j++)
    {
         ListInsert(L,j,j);             
    }
    printf("��L�ı�β���β���1-10��L=");
    ListTraverse(L,print1); 
    printf("L.length=%d��L.listsize=%d��L.elem=%u\n",L.length,L.listsize,L.elem);
    ListInsert(L,1,0);
    printf("��L�ı�ͷ����0��L.length=%d��L.listsize=%d���ı䣩,L.elem=%u�����ܸı䣩\n", L.length, L.listsize, L.elem);
    ListTraverse(L,print1);  
    GetElem(L,5,e);
    printf("�����Ԫ�ص�ֵΪ%d\n",e);  
    for(j=10;j<=11;j++)
    {
        k=LocateElem(L,j,equal);
        if(k)
        {
            printf("��%dԪ�ص�ֵΪ%d\n",k,j);
        }
        else
        {
            printf("û��ֵΪ%d��Ԫ��\n", j);
        }               
    }
    for(j=3; j<=4; j++) 
    { 
        k=LocateElem(L, j, sq); 
        if(k) 
          printf("��%d��Ԫ�ص�ֵΪ%d��ƽ����", k, j);
        else 
          printf("û��ֵΪ%d��ƽ����Ԫ��\n", j);
    } 
    for(j=1; j<=2; j++) 
    { 
         GetElem(L, j, e0); 
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
    for(j=k+1; j>=k; j--)
    { 
        i=ListDelete(L, j, e); 
        if(i==ERROR) 
          printf("ɾ����%d��Ԫ��ʧ�ܡ�", j);
        else 
          printf("ɾ����%d��Ԫ�سɹ�����ֵΪ%d\n", j, e);
    }
    
    ListTraverse(L, dbl); 
    printf("L��Ԫ��ֵ�ӱ���L=");
    ListTraverse(L, print1); 
  
    DestroyList(L);
    printf("����L��L.length=%d,L.listsize=%d,L.elem=%u\n",L.length,L.listsize,L.elem);
    system("pause");
    return 0;
    
}
