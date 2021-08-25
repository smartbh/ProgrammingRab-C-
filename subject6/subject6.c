#include <stdio.h>

void main()
{
	int apple, box;

	printf("사과수 입력 : ");
	scanf("%d", &apple);

	box = apple / 20;

	if (apple % 20 > 0)
	{
		box = box++;
	}

	printf("상자 수 : %d개\n", box);

}