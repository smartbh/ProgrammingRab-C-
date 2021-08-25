#include <stdio.h>

void main()
{
	int h, m, s , time;

	printf("Ω√ : ");
	scanf("%d", &h);

	printf("∫– : ");
	scanf("%d", &m);

	printf("√  : ");
	scanf("%d", &s);

	time = 60 * 60 * h + 60 * m + s;

	printf("%02d:%02d:%02d = %d ", h, m, s, time);

}