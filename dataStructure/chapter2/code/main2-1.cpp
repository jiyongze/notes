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
    printf("初始换L后，L.length=%d,L.listsize=%d,L.elem=%u\n",L.length,L.listsize,L.elem);

    for(j=1;j<=5;j++)
    {
        i=ListInsert(L,1,j);             
    }
    printf("在L的表头依次插入1-5后，*L.elem=");
    for(j=1;j<=5;j++)
    {
         printf("%d ",*(L.elem+j-1));
    }
    printf("\n调用ListTraverse函数后，依次输出L中的元素：");
    ListTraverse(L,print1); 
    i=ListEmpty(L);
    printf("L.length=%d,L.listsize=%d(不变)\n",L.length,L.listsize);
    printf("L.elem=%u(不变),L是否空i=%d\n",L.elem,i);
    ClearList(L); 
    i=ListEmpty(L);
    printf("清空L后，L.length=%d,L.listsize=%d(不变)",L.length,L.listsize);
    printf("L.elem=%u(不变),L是否空i=%d(1：是，2：否)\n",L.elem,i);
    for(j=1;j<=10;j++)
    {
         ListInsert(L,j,j);             
    }
    printf("在L的表尾依次插入1-10后，L=");
    ListTraverse(L,print1); 
    printf("L.length=%d，L.listsize=%d，L.elem=%u\n",L.length,L.listsize,L.elem);
    ListInsert(L,1,0);
    printf("在L的表头插入0后，L.length=%d，L.listsize=%d（改变）,L.elem=%u（可能改变）\n", L.length, L.listsize, L.elem);
    ListTraverse(L,print1);  
    GetElem(L,5,e);
    printf("第五个元素的值为%d\n",e);  
    for(j=10;j<=11;j++)
    {
        k=LocateElem(L,j,equal);
        if(k)
        {
            printf("第%d元素的值为%d\n",k,j);
        }
        else
        {
            printf("没有值为%d的元素\n", j);
        }               
    }
    for(j=3; j<=4; j++) 
    { 
        k=LocateElem(L, j, sq); 
        if(k) 
          printf("第%d个元素的值为%d的平方，", k, j);
        else 
          printf("没有值为%d的平方的元素\n", j);
    } 
    for(j=1; j<=2; j++) 
    { 
         GetElem(L, j, e0); 
        i=PriorElem(L, e0, e); 
        if(i==ERROR) 
          printf("元素%d无前驱，", e0);
        else 
          printf("元素%d的前驱为%d\n", e0, e);
    }
    for(j=ListLength(L)-1; j<=ListLength(L); j++) 
    { 
        GetElem(L, j, e0); 
        i=NextElem(L, e0, e); 
        if(i==ERROR) 
          printf("元素%d无后继\n", e0);
        else 
          printf("元素%d的后继为%d，", e0, e);
    }   
    k=ListLength(L); 
    for(j=k+1; j>=k; j--)
    { 
        i=ListDelete(L, j, e); 
        if(i==ERROR) 
          printf("删除第%d个元素失败。", j);
        else 
          printf("删除第%d个元素成功，其值为%d\n", j, e);
    }
    
    ListTraverse(L, dbl); 
    printf("L的元素值加倍后，L=");
    ListTraverse(L, print1); 
  
    DestroyList(L);
    printf("销毁L后，L.length=%d,L.listsize=%d,L.elem=%u\n",L.length,L.listsize,L.elem);
    system("pause");
    return 0;
    
}
