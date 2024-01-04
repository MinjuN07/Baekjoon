#include<stdio.h>
#include<math.h>
int main(){
	int j,i,m,n,f;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++){
		f=0;
		if(i==0||i==1) continue;
		for(j=2;j<=sqrt(i);j++){
			if(i%j==0){
				f=1;
				break;
			}
		}
		if(!f) printf("%d\n",i);
	}
}