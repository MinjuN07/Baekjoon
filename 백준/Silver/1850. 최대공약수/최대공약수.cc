#include <iostream>
using namespace std;

long long int gcd(long long int a,long long int b) {
  if (b == 0) return a;
  else return gcd(b, a % b);
}

int main() {
  unsigned long long at, bt;
  cin >> at >> bt;

  long long int a = gcd(at,bt);
  while (a--) cout << 1;
  return 0;
}