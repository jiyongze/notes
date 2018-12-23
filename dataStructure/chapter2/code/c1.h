// c1.h 包含各种常见的头文件
#include<string.h> //string.h头文件定义了一个变量类型、一个宏和各种操作字符数组的函数。
#include<ctype.h>//ctype.h 头文件提供了一些函数，可用于测试和映射字符。
#include<malloc.h>
#include<limits.h>//limits.h 头文件决定了各种变量类型的各种属性。定义在该头文件中的宏限制了各种变量类型（比如 char、int 和 long）的值。
#include<stdio.h>//stdio .h 头文件定义了三个变量类型、一些宏和各种函数来执行输入和输出
#include<stdlib.h>//stdlib .h 头文件定义了四个变量类型、一些宏和各种通用工具函数。
#include<io.h>
#include<math.h>//math.h 头文件定义了各种数学函数和一个宏。在这个库中所有可用的功能都带有一个 double 类型的参数，且都返回 double 类型的结果
#include<sys/timeb.h>
//stdarg.h 头文件定义了一个变量类型 va_list 和三个宏，这三个宏可用于在参数个数未知（即参数个数可变）时获取函数中的参数。
//可变参数的函数通在参数列表的末尾是使用省略号(,...)定义的。
#include<stdarg.h>


//函数结构状态代码
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
// #define OVERFLOW -2 因为在math.h中已定义OVERFLOW的值为3，故去掉此行
typedef int Status;
typedef int Boolean;
