#include <stdio.h>
int main(){
	char sub[51],alp[2];
	double sc,g_sum=0,sum=0,n;
	while(scanf("%s %lf %s",sub,&sc,alp) != EOF){
		if(alp[0]=='P') continue;
		if(alp[0]=='F') {g_sum+=sc; continue;}
		n='A'-alp[0]+4.0;
		if(alp[1]=='+') n+=0.5;
		g_sum+=sc;
		sum+=sc*n;
	}
	printf("%f",sum/g_sum);
    return 0;
}

