#include <stdio.h>

void main()
{
	int apple, box;

	printf("����� �Է� : ");
	scanf("%d", &apple);

	box = apple / 20;

	if (apple % 20 > 0)
	{
		box = box++;
	}

	printf("���� �� : %d��\n", box);

}