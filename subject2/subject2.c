#include <stdio.h>

void main()
{
	double f, c;

	printf("ȭ���µ�<F>�� �Է��Ͻÿ�. : ");
	scanf("%lf", &f);

	c = (5. / 9)*(f - 32);

	printf("ȭ���µ� %.1lf�� �����µ��� %.1lf �Դϴ�.", f, c);

}