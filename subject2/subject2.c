#include <stdio.h>

void main()
{
	double f, c;

	printf("화씨온도<F>를 입력하시오. : ");
	scanf("%lf", &f);

	c = (5. / 9)*(f - 32);

	printf("화씨온도 %.1lf의 섭씨온도는 %.1lf 입니다.", f, c);

}