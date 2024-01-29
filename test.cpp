/* 01-03.c демонстрация результатов инкремента
 в разных ситуациях */
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int i = 0, a = 0;
 printf("\n i = %d, a = %d\n", i,a);
 a = ++i;
 printf("a = ++i i = %d, a = %d\n", i,a);
 a = i++;
 printf("a = i+ i = %d, a = %d\n", i,a);
 /*
 i=0;a=0;
 printf("i=0;a=0; i = %d, a = %d\n", i,a);
 */
 a = ++i + ++i ;
 printf("a = ++i + ++i i = %d, a = %d\n", i,a);
 a = i++ + i++;
 printf("a = i++ + i++ i = %d, a = %d\n", i,a);
 a = ++i + ++i + ++i;
11
 printf("a = ++i + ++i + ++i i = %d, a = %d\n", i,a);
 a = i++ + i++ + i++;
 printf("a = i++ + i++ + i++ i = %d, a = %d\n", i,a);
 a = a + --i;
 printf("a = a + --i i = %d, a = %d\n", i,a);
 a = a + i--;
 printf("a = a + i-- i = %d, a = %d\n", i,a);
 getch();
 return 0;
}55555555555555555
