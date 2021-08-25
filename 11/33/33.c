#pragma warning (disable:4996) // scanf() 사용하는 경우
#include <stdio.h>
void main()
{
 int h, m, s, ss;
 scanf("%d", &h);
 scanf("%d", &m);
 scanf("%d", &s);
 ss = h*3600 + m*60 + s;
 printf("%02d:%02d:%02d = %d\n", h, m, s, ss);
}