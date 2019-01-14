// func2-2.h 几个常用的函数
Status equal(ElemType c1,ElemType c2)
{
   if(c1==c2)
   {
      return TRUE;       
   }else 
   {
      return FALSE;   
   }
}
Status sq(ElemType c1, ElemType c2)
{ 
  if(c1==c2*c2)
    return TRUE;
  else
    return FALSE;
}
void dbl(ElemType &c)
{ 
  c*=2;
}
int comp(ElemType a,ElemType b)
{
    if(a==b)
    {
       return 0;     
    }else
    {
       return (a-b)/abs(a-b);
    }
}
void print(ElemType c)
{ 
  printf("%d ", c);
}
void print1(ElemType &c)
{ 
  printf("%d ", c);
}
void print2(ElemType c)
{ 
  printf("%c ", c);
}
