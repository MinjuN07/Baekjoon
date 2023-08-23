#include <stdio.h>

int main(void)
{
	float a,b;
	scanf("%f %f",&a,&b);
	printf("%.12lf",(double)a/b);
	return 0;
}