#include <stdio.h>

int main() {
	int n,a[1001],max = 0;
	double sum = 0;
    scanf("%d",&n);
    
    for(int i = 0;i < n;i++) {
		scanf("%d",&a[i]);
		if(max < a[i]) max = a[i];
	}
    for(int i = 0;i < n;i++) {
    	sum = sum + ((float)a[i]/max)*100;
	}
	printf("%lf",(float)sum/n);
    return 0;
}
