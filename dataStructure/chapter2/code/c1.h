// c1.h �������ֳ�����ͷ�ļ�
#include<string.h> //string.hͷ�ļ�������һ���������͡�һ����͸��ֲ����ַ�����ĺ�����
#include<ctype.h>//ctype.h ͷ�ļ��ṩ��һЩ�����������ڲ��Ժ�ӳ���ַ���
#include<malloc.h>
#include<limits.h>//limits.h ͷ�ļ������˸��ֱ������͵ĸ������ԡ������ڸ�ͷ�ļ��еĺ������˸��ֱ������ͣ����� char��int �� long����ֵ��
#include<stdio.h>//stdio .h ͷ�ļ������������������͡�һЩ��͸��ֺ�����ִ����������
#include<stdlib.h>//stdlib .h ͷ�ļ��������ĸ��������͡�һЩ��͸���ͨ�ù��ߺ�����
#include<io.h>
#include<math.h>//math.h ͷ�ļ������˸�����ѧ������һ���ꡣ������������п��õĹ��ܶ�����һ�� double ���͵Ĳ������Ҷ����� double ���͵Ľ��
#include<sys/timeb.h>
//stdarg.h ͷ�ļ�������һ���������� va_list �������꣬��������������ڲ�������δ֪�������������ɱ䣩ʱ��ȡ�����еĲ�����
//�ɱ�����ĺ���ͨ�ڲ����б��ĩβ��ʹ��ʡ�Ժ�(,...)����ġ�
#include<stdarg.h>


//�����ṹ״̬����
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
// #define OVERFLOW -2 ��Ϊ��math.h���Ѷ���OVERFLOW��ֵΪ3����ȥ������
typedef int Status;
typedef int Boolean;
