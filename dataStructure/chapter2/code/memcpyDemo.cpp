// 将字符串复制到数组 dest 中
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main ()
{
   const char src[50] = "http://www.runoob.com";
   char dest[50];
   printf("src的字符长度是：%d\n",strlen(src)+1);
   memcpy(dest, src, strlen(src));
   printf("dest = %s\n", dest);
   system("pause");
   return(0);
}
