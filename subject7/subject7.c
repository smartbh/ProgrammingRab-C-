#include <stdio.h>

void main()
{
	int a = 5, b = 10, c = 15;

	printf("(1) a = %d, b = %d, c = %d\n", a += 2, b++, --c); //
	printf("(2) a = %d, b = %d, c = %d\n", a++ ,++b, c--);
	printf("(3) a = %d, b = %d, c = %d\n", a,b,c);
	printf("(4) a = %d, b = %d, c = %d\n", a += 2, b-=3, c+=5);
	printf("(5) a = %d, b = %d, c = %d\n", --a, b-=4, ++c);
	printf("(6) a = %d, b = %d, c = %d\n", a *3, b/=5, c%4);
}