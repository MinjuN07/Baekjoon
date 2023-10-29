#include <stdio.h>
int main() {
    int arr[42] = {0},t,f = 0;
    for(int i = 1;i<=10;i++) {
    	scanf("%d",&t);
    	arr[t%42]++;
    	
	}
	for(int i = 0;i<=41;i++) {
		if(arr[i] > 0) f++;
	}
	printf("%d",f);
	return 0;
}
