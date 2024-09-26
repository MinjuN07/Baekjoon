#include<iostream>
#include <cmath>

using namespace std;

int N;

bool isPrime(int x) {
  for(int i=2;i<=sqrt(x);i++) {
    if(x%i==0) return false;
  }
  return true;
}

void dfs(int num,int dig) {
  if(dig == N) {
    cout<<num<<'\n';
    return;
  }
  for(int i=1;i<10;i++) {
    int t = num*10+i;
    if(isPrime(t)) {
      dfs(t,dig+1);
    }
  }
  return;
}

int main(){
  cin>>N;
  for(int i=2;i<10;i++) {
    if(isPrime(i)) dfs(i,1);
  }
  return 0;
}