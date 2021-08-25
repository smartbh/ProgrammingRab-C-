#pragma warning (disable:4996) // scanf() 사용하는 경우
#include <stdio.h>
void main()
{
 double F, C;
 printf("화씨 : ");
 scanf("%lf", &F); // scanf_s() 사용해도 됨
 C = (5/9.) * (F-32);
 printf("%.1lfF = %.1lfC\n", F, C);
}