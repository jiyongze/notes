# 数据结构第三章
## 概念
### 栈
> 栈（stack），是限定仅在表尾进行插入或者删除操作的线性表。表尾端
有其特殊的含义，称为栈顶，表头端称为栈底。不含元素的空表称为空栈。
栈又称为后进先出（last in first out）的线性表（简称LIFO结构）。
### 顺序栈的表示
```
#define STACK_INIT_SIZE 100
#define STACKINCREMENT 10
typedef struct {
    SElemType *base;//在栈构造之前和销毁之后，base的值为NULL
    SElemType *top;//栈顶指针
    int stacksize;//当前已分配的存储空间，以元素为单位。
}SqStack;
```
### 栈的应用
1. 数制转换
2. 括号匹配检测
3. 行编辑程序
4. 迷宫求解
5. 表达式求值

### 栈与递归的实现
* 汉诺塔

### 队列

> 队列（queue）是一种先进先出（first in first out缩写为FIFO）的线性表。

### 队列的链式表示和实现

```
typedef struct QNode{
    QElemType data;
    QueuePtr *next;
}QNode,*QueuePtr;
typedef struct {
    QueuePtr front;// 队头指针
    QueuePtr rear; // 队尾指针
} LinkQueue;
```

### 循环队列
```
#define MAXQSIZE 100
typedef struct {
    QElemType *base;// 初始换的动态分配存储空间
    int front;// 头指正，若队列不空，指向队列头元素
    int rear;// 位置正，若队列不空，指向队列尾元素的下一个位置。
} SqQueue;
```
### 队列的应用
* 银行业务