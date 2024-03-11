#include<stdio.h>
int main() {
	float n;
	scanf("%f",&n);
	printf("%0.1f", 31>n ? n/2 : (n-30)*45/30+15);
}