// ���ַ������Ƶ����� dest ��
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main ()
{
   const char src[50] = "http://www.runoob.com";
   char dest[50];
   printf("src���ַ������ǣ�%d\n",strlen(src)+1);
   memcpy(dest, src, strlen(src));
   printf("dest = %s\n", dest);
   system("pause");
   return(0);
}
