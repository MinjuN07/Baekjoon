#include <stdio.h>
int main(){
	char sub[51],alp[2];
	double sc,sumh=0,sumk=0;
	for(int i=0;i<20;i++){
		scanf("%s %lf %s",sub,&sc,alp);
		if(alp[0]=='P') continue;
		else{
			sumh += sc;
			if(alp[1]=='+'){
				switch(alp[0]) {
					case 'A':{sumk+=sc*4.5; break;}
					case 'B':{sumk+=sc*3.5; break;}
					case 'C':{sumk+=sc*2.5; break;}
					case 'D':{sumk+=sc*1.5; break;}
				}
			}
			else if(alp[1]=='0'){
				switch(alp[0]) {
					case 'A':{sumk+=sc*4.0; break;}
					case 'B':{sumk+=sc*3.0; break;}
					case 'C':{sumk+=sc*2.0; break;}
					case 'D':{sumk+=sc*1.0; break;}
				}
			}
		}
	}
	printf("%f",sumk/sumh);
    return 0;
}