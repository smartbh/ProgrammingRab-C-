#include <stdio.h>

void main()
{
	char name[20];
	double lang, eng, math, sum, avg;

	printf("이름 : ");
	gets(name);

	printf("국어 : ");
	scanf("%lf", &lang);

	printf("영어 : ");
	scanf("%lf", &eng);

	printf("수학 : ");
	scanf("%lf", &math);

	sum = lang + eng + math;
	avg = sum / 3;

	printf("이름 = %s\n", name);

	printf("총점 : %6.2lf\n", sum);

	printf("평균 : %6.2lf\n", avg);

}