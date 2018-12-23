// bo2-2.h 带有头结点的单链表（存储结构由c2-2.h定义）的基本操作（12个），
// 包括算法2.8～2.10
void InitList(LinkList &L)
{
     L=(LinkList)malloc(sizeof(LNode));//产生头结点，并使L指向此头结点 
     if(!L)
     {
          exit(OVERFLOW);
     }
     L->next=NULL;
}
void DestoryList(LinkList &L)
{
     LinkList q=L;
     while(L)
     {
        q=L->next;
        free(L);
        L=q;     
     }
}
Status ListInsert(LinkList L,int i,ElemType e)
{
    int j=0;
    LinkList s,p=L;
    while(p && j<i-1)
    {
        j++;
        p=p->next;    
    } 
    if(!p || j>i-1)
    {
        return ERROR;  
    }
    s=(LinkList)malloc(sizeof(LNode));
    s->data=e;
    s->next=p->next;
    p->next=s;
    return OK;
}
void ListTraverse(LinkList L,void (*visit)(ElemType))
{
   LinkList p=L->next;
   while(p)
   {
       visit(p->data);    
       p=p->next;
   }  
   printf("\n");
}
Status ListEmpty(LinkList L)
{
    if(L->next)
    {
        return ERROR;
    }else
    {
        return TRUE;
    }
}
int ListLength(LinkList L)
{
    LinkList p=L->next;
    int j=0;
    while(p)
    {
        j++;
        p=p->next;    
    }
    return j;
}
void ClearList(LinkList L)
{
     LinkList p=L->next;
     L->next=NULL;
     DestoryList(p);
                
}
int LocateElem(LinkList L,ElemType &e, Status (*compare)(ElemType,ElemType))
{
     LinkList p=L->next;
     int i=0;
     while(p)
     {
        i++;
        if(compare(p->data,e))
        {
         return i;
        }
        p=p->next;     
     }
     
     return 0;
}
Status GetElem(LinkList L,int i,ElemType &e)
{
     LinkList p=L->next;
     int j=1;
     while(p && j<i)
     {
          j++;
          p=p->next;   
     }
     if(!p || j>i)
     {
         return ERROR;  
     }
     e=p->data;
     return OK;
}
Status PriorElem(LinkList L,ElemType cur_e,ElemType &pre_e)
{
     LinkList q, p=L->next;
     while(p && p->next)
     {
         q=p->next;
         if(q->data==cur_e)
         {
             pre_e=p->data;
             return OK;              
         }
         p=q;    
     }
     return ERROR;
       
}
Status NextElem(LinkList L,ElemType cur_e,ElemType &next_e)
{
     LinkList p=L->next;
     while(p && p->next)
     {
         if(p->data==cur_e)
         {
             next_e=p->next->data; 
             return OK;             
         } 
         p=p->next;
     }  
     return ERROR;
}
Status ListDelete(LinkList L,int i,ElemType &e)
{
     int j=0;
     LinkList q,p=L;
     
     while(p->next && j<i-1)
     {
         j++;
         p=p->next;          
     }
     if(!p->next || j>i-1)
     {
         return ERROR;  
     }
     q=p->next;
     p->next=q->next;
     e=q->data;
     free(q);  
     return OK;
}


//Status ListDelete(LinkList L, int i, ElemType &e)
//{
//  int j=0;
//  LinkList q, p=L;
//  while(p->next && j<i-1)
//  { j++;
//    p=p->next;
//  }
//  if(!p->next || j>i-1)
//    return ERROR;
//  q=p->next;
//  p->next=q->next;
//  e=q->data;
//  free(q);
//  return OK;
//}

