// bo2-5.h 静态链表（数据结构由c2-3.h定义）的基本操作（13个），包括算法2.13～2.16
#define DestroyList ClearList 
void InitList(SLinkList L)
{
    int i;
    L[MAX_SIZE-1].cur=0;
    for(i=0;i<MAX_SIZE-2;i++)
    {
        L[i].cur=i+1;                     
    }
     L[MAX_SIZE-2].cur=0;
}
int ListLength(SLinkList L)
{   
    int j=0,i=L[MAX_SIZE-1].cur;
    while(i)
    {
       i=L[i].cur;
       j++;     
    }
    return j;
}
int Malloc(SLinkList space) 
{ 
  int i=space[0].cur; 
  if(i) 
    space[0].cur=space[i].cur; 
  return i; 
}
Status ListInsert(SLinkList L,int i,ElemType e)
{
  int m, j, k=MAX_SIZE-1; 
  if(i<1 || i>ListLength(L)+1) 
    return ERROR;
  j=Malloc(L); 
  if(j) 
  { 
    L[j].data=e; 
    for(m=1; m<i; m++) 
      k=L[k].cur; 
    L[j].cur=L[k].cur; 
    L[k].cur=j; 
    return OK;
  }
  return ERROR;    
}
void ListTraverse(SLinkList L, void(*visit)(ElemType))
{ 
  int i=L[MAX_SIZE-1].cur; 
  while(i) 
  { visit(L[i].data); 
    i=L[i].cur; 
  }
  printf("\n");
}
Status ListEmpty(SLinkList L)
{ 
  if(L[MAX_SIZE-1].cur==0) 
    return TRUE;
  else
    return FALSE;
}
void ClearList(SLinkList L)
{ 
  int j, i=L[0].cur; 
  while(i) 
  { j=i; 
    i=L[i].cur; 
  }
  L[j].cur=L[MAX_SIZE-1].cur; 
  L[MAX_SIZE-1].cur=0; 
}

