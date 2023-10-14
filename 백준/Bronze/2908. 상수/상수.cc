#include <stdio.h>

int main(void) {
		int a1,a2,a3,b1,b2,b3;
		scanf("%1d%1d%1d %1d%1d%1d",&a1,&a2,&a3,&b1,&b2,&b3);
		if(a3 > b3) printf("%d%d%d",a3,a2,a1);
		else if(a3 == b3) {
			if(a2 > b2) printf("%d%d%d",a3,a2,a1);
			else if(a2 == b2) {
				if(a1 >= b1) printf("%d%d%d",a3,a2,a1);
				else printf("%d%d%d",b3,b2,b1);
			}
			else printf("%d%d%d",b3,b2,b1);
		}
		else printf("%d%d%d",b3,b2,b1);
	return 0;
}