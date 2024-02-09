#include <iostream>
using namespace std;
long long int n;
int a[1500001]={0,1};
void f(){
	for(int i=2;i<1499999;i++)
		a[i]=(a[i-1]+a[i-2])%1000000;
	cout<<a[n%1500000];
}
int main(){
	cin>>n;
	f();
	return 0;
}