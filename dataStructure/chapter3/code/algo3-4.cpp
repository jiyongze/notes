// algo3-4.cpp ����ջ����Թ����⣨ֻ���һ���⣬�㷨3.3��
#include"c1.h"
struct PosType
{
    int x;
    int y;   
};
//ȫ�ֱ���
PosType begin,end;
// {������, ������}���ƶ���������Ϊ��������
PosType direc[4]={{0,1},{1,0},{0,-1},{-1,0}}; 
#define MAXLENGTH 25
typedef int MazeType[MAXLENGTH][MAXLENGTH];
MazeType m;
int x,y;//�Թ������������� 
void Print()
{
    int i,j;
    for(i=0;i<x;i++) 
    {
        for(j=0;j<y;j++)
        {
            printf("%3d",m[i][j]);     //3d ռ��λ       
        }  
        printf("\n");           
    }
}
void Init()
{
    int i,j,x1,y1;
    printf("�������Թ�������������(������ǽ):"); 
    scanf("%d,%d",&x,&y);
    //�����Թ���Χǽ0 �� ����ͨ��Ϊ1 
    for(i=0;i<y;i++)
    {
        m[0][i]=0;
        m[x-1][i]=0;            
    }
    for(i=1;i<x-1;i++)
    {
        m[i][0]=0;
        m[i][y-1]=0;            
    }
    for(i=1;i<x-1;i++)
    {
        for(j=1;j<y-1;j++)
        {
            m[i][j]=1;              
        }              
    }
    
    printf("�������Թ���Χǽ��Ԫ��");
    scanf("%d",&j);
    printf("�����������Թ���ǽÿ����Ԫ������,������\n");
    for(i=1; i<=j; i++)
    { 
        scanf("%d,%d", &x1, &y1);
        m[x1][y1]=0;
    }
    printf("�Թ��ṹ���£�\n");
    Print();
    printf("��������ڵ�����,������");
    scanf("%d,%d", &begin.x, &begin.y);
    printf("��������ڵ�����,������");
    scanf("%d,%d", &end.x, &end.y);  
}
int curStep=1;
struct SElemType
{
    int ord;
    PosType seat;
    int di;   
};
#define STACK_INIT_SIZE 10 
#define STACK_INCREMENT 2 
struct SqStack 
{ 
    SElemType *base; 
    SElemType *top; 
    int stacksize; 
};
#include"bo3-1.h"
//�жϸ�λ���Ƿ�Ϊͨ�� 
Status Pass(PosType b)
{
    if(m[b.x][b.y]==1)
    {
        return OK;           
    }
    else
    {
        return ERROR;
    }   
}
// ��ʶ�߹��ĺۼ� 
void FootPrint(PosType b)
{
     m[b.x][b.y]=curStep;
}
//������һ�� 
void NextPos(PosType &b,int di)
{
     b.x+=direc[di].x;
     b.y+=direc[di].y;
}
//��Ǹ�λ���Ѿ��߹� 
void MarkPrint(PosType b)
{
     m[b.x][b.y]=-1;
}
Status MazePath(PosType start,PosType end)
{
    PosType curpos=start;
    SqStack S;
    SElemType e;
    InitStack(S);
    do
    {
        if(Pass(curpos))
        {
            FootPrint(curpos);
            e.ord=curStep;
            e.seat=curpos;
            e.di=0;
            Push(S,e);
            curStep++;
            if(curpos.x==end.x && curpos.y==end.y )
            {
                 return TRUE;              
            }
            NextPos(curpos,e.di);            
        }
        else
        {
            Pop(S,e);
            curStep--;
            while(e.di==3 && !StackEmpty(S))
            {
               MarkPrint(e.seat);  
               Pop(S,e);  
               curStep--;       
            }
            if(e.di<3)
            {
                e.di++;
                Push(S,e);
                curStep++;
                curpos=e.seat;
                NextPos(curpos,e.di);      
            }
        }         
    } while(!StackEmpty(S));   
    return FALSE;
}
int main()
{
    
    Init();
    if(MazePath(begin,end))
    {
        printf("���Թ�����ڵ����ڵ�һ��·�����£�\n");
        Print();                   
    }
    else
    {
        printf("���Թ�û�д���ڵ����ڵ�·��\n");
    }
   
    system("pause");
    return 0;
}