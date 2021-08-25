#pragma warning (disable : 4996)
#include <stdio.h>


void main()
{
	double w, h, tri;


	printf("밑변 , 높이 = ");
	scanf("%lf %lf", &w, &h);

	tri = (w*h) / 2;

	printf("밑변 = %.2lfcm, 높이 = %.2lfcm인 삼각형의 면적 = %.2lfcm\n", w, h, tri);

}