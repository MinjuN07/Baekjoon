#include <stdio.h>

int main() {
	int j1,j2,j3,t;
	scanf("%d %d %d",&j1,&j2,&j3);
	if(j1 < j2) {
		t = j2;
		j2 = j1;
		j1 = t;
	}
	if(j1 < j3) {
		t = j3;
		j3 = j1;
		j1 = t;
	}
	if(j1 == j2 && j2 == j3)
		printf("%d",10000+j1*1000);
	else if(j1 == j2 || j1 == j3)
		printf("%d",1000+j1*100);
	else if(j2 == j3)
		printf("%d",1000+j2*100);
	else
		printf("%d",j1*100);
	return 0;
}