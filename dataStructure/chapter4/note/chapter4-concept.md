# 数据结构第四章
# 串
## 概念
### 串
> 串（string）（字符串）是由零个或多个字符组成的有限序列。

### 空串，空格串
> 零个字符的串称为空串，它的长度为零。 由一个或多个空格组成的串' '
称为**空格串**（此处不是空串），它的长度为串中空格字符的个数。

### 子串，主串，位置
> 串中任意个连续的字符组成的子序列称为该串的**子串**，
包含子串的串相应的称为**主串**。通常称字符在序列中的序号为该字符
在串中的**位置**，子串在主串中的位置则以子串的第一个字符在主串中
的位置来表示。

### 串的表示和实现
1. 定长顺序存储表示
    ```$xslt
    #define MAXSTRLEN 255
    //0号单元存放串的长度
    typedef unsigned char SString[MAXSTRLEN+1];
    ```
2. 堆分配存储表示
    ```
    typeof struct {
        char* ch;
        int len;
    }HString;
    ```
3. 串的块链存储表示(不熟悉)
    ```
    #define CHUNKSIZE 80
    typedef struct Chunk{
        char ch[CHUNKSIZE];
        struct Chunk *next;
    }Chunk;
    typedef struct{
        Chunk *head, *tail;
        int curlen;
    };
    ```