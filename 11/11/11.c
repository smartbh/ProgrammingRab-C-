//
//Lab1-1 삼각형
//학번 : 1712345 이름 : 홍길동
#pragma warning (disable:4996) // scanf() 사용하는 경우
#include <stdio.h>
void main()
{
	double w, h, area;
	printf("밑변  , 높이 : ");
	scanf("%lf %lf", &w, &h);
	area = w*h / 2.;
	printf("밑변=%.2lf 높이=%.2lf 면적=%.2lf\n", w, h, area);
}