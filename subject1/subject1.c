#pragma warning (disable : 4996)
#include <stdio.h>


void main()
{
	double w, h, tri;


	printf("�غ� , ���� = ");
	scanf("%lf %lf", &w, &h);

	tri = (w*h) / 2;

	printf("�غ� = %.2lfcm, ���� = %.2lfcm�� �ﰢ���� ���� = %.2lfcm\n", w, h, tri);

}