#pragma warning (disable:4996) // scanf() ����ϴ� ���
#include <stdio.h>
void main()
{
 double F, C;
 printf("ȭ�� : ");
 scanf("%lf", &F); // scanf_s() ����ص� ��
 C = (5/9.) * (F-32);
 printf("%.1lfF = %.1lfC\n", F, C);
}