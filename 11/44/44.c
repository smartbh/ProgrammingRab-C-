#include <stdio.h>
void main()
{
	char name[20];
	double kor, eng, math, total;
	double avg;
	gets(name);
	scanf("%lf %lf %lf", &kor, &eng, &math);
	total = kor + eng + math;
	avg = total / 3.;
	printf("%s total=%6.2lf avg=%6.2lf\n", name, total, avg);
}