# 数据结构第一章
## 代码和注释
### 头文件
```
// c1.h （文件名）
#include<string.h> 
#include<ctype.h> 
#include<malloc.h> 
#include<limits.h> 
#include<stdio.h> 
#include<stdlib.h> 
#include<io.h> 
#include<math.h> 
#include<sys/timeb.h> 
#include<stdarg.h> 
// 函数结果状态代码。在严书第10页
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
// #define INFEASIBLE -1 没使用
// #define OVERFLOW -2 因为在math.h中已定义OVERFLOW的值为3，故去掉此行
typedef int Status; 
typedef int Boolean; 
```

### 第一个例子
#### algo1-1.cpp
```
// algo1-1.cpp 变量的引用类型和非引用类型的区别
#include"c1.h"
void fa(int a) 
{ a++;
  printf("在函数fa中：a=%d\n", a);
}
void fb(int &a) 
{ a++;
  printf("在函数fb中：a=%d\n", a);
}
int main()
{
  int n=1;
  printf("在主程中，调用函数fa之前：n=%d\n", n);
  fa(n);
  printf("在主程中，调用函数fa之后，调用函数fb之前：n=%d\n", n);
  fb(n);
  printf("在主程中，调用函数fb之后：n=%d\n", n);
  system("pause");
  return 0;
}
```
#### 运行结果
!['运行结果'](../img/demo1.png '运行结果')

### 第二个例子
#### algo1-2.cpp
```
// algo1-3.cpp 计算1-1/x+1/(x*x)…的更快捷的算法
#include"c1.h"
int main()
{
  timeb t1, t2;
  long t;
  double x, sum1=1, sum=1;
  int i, n;
  printf("请输入x n：");
  scanf("%lf%d", &x, &n);
  ftime(&t1);
  for(i=1; i<=n; i++)
  { sum1*=-1.0/x;
    sum+=sum1;
  }
  ftime(&t2);
  t=(t2.time-t1.time)*1000+(t2.millitm-t1.millitm);
  printf("sum=%lf，用时%ld毫秒\n", sum, t);
  return 0;
}
```
#### 运行结果
!['运行结果'](../img/demo2.png '运行结果')


### 第三个例子
#### algo1-3.cpp
```
// algo1-3.cpp 计算1-1/x+1/(x*x)…的更快捷的算法
#include"c1.h"
int main()
{
  timeb t1, t2;
  long t;
  double x, sum1=1, sum=1;
  int i, n;
  printf("请输入x n：");
  scanf("%lf%d", &x, &n);
  ftime(&t1);
  for(i=1; i<=n; i++)
  { sum1*=-1.0/x;
    sum+=sum1;
  }
  ftime(&t2);
  t=(t2.time-t1.time)*1000+(t2.millitm-t1.millitm);
  printf("sum=%lf，用时%ld毫秒\n", sum, t);
  system("pause");
  return 0;
}

```
#### 运行结果
!['运行结果'](../img/demo3.png '运行结果')

