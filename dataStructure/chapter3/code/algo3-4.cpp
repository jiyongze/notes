// algo3-4.cpp 利用栈求解迷宫问题（只输出一个解，算法3.3）
#include"c1.h"
struct PosType
{
    int x;
    int y;   
};
//全局变量
PosType begin,end;
// {行增量, 列增量}，移动方向依次为东南西北
PosType direc[4]={{0,1},{1,0},{0,-1},{-1,0}}; 
#define MAXLENGTH 25
typedef int MazeType[MAXLENGTH][MAXLENGTH];
MazeType m;
int x,y;//迷宫的行数和列数 
void Print()
{
    int i,j;
    for(i=0;i<x;i++) 
    {
        for(j=0;j<y;j++)
        {
            printf("%3d",m[i][j]);     //3d 占三位       
        }  
        printf("\n");           
    }
}
void Init()
{
    int i,j,x1,y1;
    printf("请输入迷宫的行数和列数(包括外墙):"); 
    scanf("%d,%d",&x,&y);
    //设置迷宫的围墙0 和 设置通道为1 
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
    
    printf("请输入迷宫内围墙单元数");
    scanf("%d",&j);
    printf("请依次输入迷宫内墙每个单元的行数,列数：\n");
    for(i=1; i<=j; i++)
    { 
        scanf("%d,%d", &x1, &y1);
        m[x1][y1]=0;
    }
    printf("迷宫结构如下：\n");
    Print();
    printf("请输入入口的行数,列数：");
    scanf("%d,%d", &begin.x, &begin.y);
    printf("请输入出口的行数,列数：");
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
//判断该位置是否为通道 
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
// 标识走过的痕迹 
void FootPrint(PosType b)
{
     m[b.x][b.y]=curStep;
}
//走向下一步 
void NextPos(PosType &b,int di)
{
     b.x+=direc[di].x;
     b.y+=direc[di].y;
}
//标记该位置已经走过 
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
        printf("此迷宫从入口到出口的一条路径如下：\n");
        Print();                   
    }
    else
    {
        printf("此迷宫没有从入口到出口的路径\n");
    }
   
    system("pause");
    return 0;
}
