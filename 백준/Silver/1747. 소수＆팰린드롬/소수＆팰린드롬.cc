#include <iostream>
#include <cmath>
#include <string>
using namespace std;

bool sosu(int a) {
  for(int i=2;i<sqrt(a)+1;i++) {
    if(a==i) continue;
    if(a%i==0) return false;
  }
  string s = to_string(a);
  for(int i = 0; i <= s.length() / 2; i++) {
    if(s[i] != s[s.length() - i - 1]) {
      return false;
    }
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  if(n==1) {cout << 2; return 0;}
  while(1) {
    if(!sosu(n)) n++;
    else {
      cout << n;
      break;
    }
  }
  return 0;
}