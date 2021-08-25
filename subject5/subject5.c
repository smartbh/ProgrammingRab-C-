#include <stdio.h>

void main()
{
	int array[10] = { 50000,10000,5000,1000,500,100,50,10,5,1 };
	int money; 

	printf("금액을 입력 = ");
	scanf("%d", &money);

	for (int i =0; i<10;i++)
	{
		printf("%5d원 = %2d\n", array[i], money / array[i]);
		money = money % array[i];
	}
	/*
	printf("5만원 = %2d\n", money / 50000);
	money = money - 50000 * (money / 50000);

	printf("1만원 = %2d\n", money / 10000);
	money = money - 10000 * (money / 10000);

	printf("5천원 = %2d\n", money / 5000);
	money = money - 5000 * (money / 5000);

	printf("1천원 = %2d\n", money / 1000);
	money = money - 1000 * (money / 1000);

	printf("500원 = %2d\n", money / 500);
	money = money - 500 * (money / 500);

	printf("100원 = %2d\n", money / 100);
	money = money - 100 * (money / 100);

	printf("50원 = %2d\n", money / 50);
	money = money - 50 * (money / 50);

	printf("10원 = %2d\n", money / 10);
	money = money - 10 * (money / 10);

	printf("5원 = %2d\n", money / 5);
	money = money - 5 * (money / 5);

	printf("1원 = %2d\n", money / 1);
	money = money - 1 * (money / 1);
	*/
}