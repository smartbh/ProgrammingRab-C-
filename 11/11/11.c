//
//Lab1-1 �ﰢ��
//�й� : 1712345 �̸� : ȫ�浿
#pragma warning (disable:4996) // scanf() ����ϴ� ���
#include <stdio.h>
void main()
{
	double w, h, area;
	printf("�غ�  , ���� : ");
	scanf("%lf %lf", &w, &h);
	area = w*h / 2.;
	printf("�غ�=%.2lf ����=%.2lf ����=%.2lf\n", w, h, area);
}