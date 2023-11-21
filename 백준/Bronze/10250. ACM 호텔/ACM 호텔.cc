#include<stdio.h>
int main(){
	int T,H,W,N,i,f,r;
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%d%d%d",&H,&W,&N);
		if(H==1){
			f=1;
			r=N;}
		else{
			f=N%H;
			if(!f)f=H;
			r=N/H;
			if(N%H!=0)r++;}
		printf("%d%02d\n",f,r);
	}
}