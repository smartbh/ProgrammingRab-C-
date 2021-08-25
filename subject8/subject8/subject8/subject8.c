#include <stdio.h>

void main()
{
	int a, b, c;
	printf("정수 세 개 입력");

	scanf("%d %d %d", &a, &b, &c);
	
	if (a > b && b > c)
	{
		printf("<1> max = %d min = %d\n", a, c);

		printf("<2> 크기순 : %d %d %d\n", a, b, c);
	}

	else if (a > c && b < c )
	{
		printf("<1> max = %d min = %d\n", a, b);

		printf("<2> 크기순 : %d %d %d\n", a, c, b);
	}

	else if (b>a && a>c)
	{
		printf("<1> max = %d min = %d\n", b,c);

		printf("<2> 크기순 : %d %d %d\n", b, a, c);
	}

	else if (b>c && c>a )
	{
		printf("<1> max = %d min = %d\n", b, a);

		printf("<2> 크기순 : %d %d %d\n", b, c, a);
	}

	else if (c>a && a>b)
	{
		printf("<1> max = %d min = %d\n", c, b);

		printf("<2> 크기순 : %d %d %d\n", c, a, b);
	}

	else if (c>b && b>a)
	{
		printf("<1> max = %d min = %d\n", c, a);

		printf("<2> 크기순 : %d %d %d\n",c, b, a);
	}
}