#include <stdio.h>

void main()
{
	char name[20];
	double lang, eng, math, sum, avg;

	printf("�̸� : ");
	gets(name);

	printf("���� : ");
	scanf("%lf", &lang);

	printf("���� : ");
	scanf("%lf", &eng);

	printf("���� : ");
	scanf("%lf", &math);

	sum = lang + eng + math;
	avg = sum / 3;

	printf("�̸� = %s\n", name);

	printf("���� : %6.2lf\n", sum);

	printf("��� : %6.2lf\n", avg);

}