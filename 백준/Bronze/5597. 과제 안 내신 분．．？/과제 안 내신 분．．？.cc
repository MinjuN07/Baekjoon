#include <stdio.h>
int main() {
    int arr[31] = {0},t;
    for(int i = 1;i<=28;i++) {
    	scanf("%d",&t);
    	arr[t] = t;
	}
	for(int i = 1;i<=30;i++) {
		if(arr[i] == 0) printf("%d\n",i);
	}
	return 0;
}
