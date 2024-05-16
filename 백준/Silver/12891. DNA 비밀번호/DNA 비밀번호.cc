#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  int n,m;
  int a,c,g,t;
  string DNA;
  cin>>n>>m;
  cin>>DNA;
  cin>>a>>c>>g>>t;

  string subDNA = DNA.substr(0, m);
  vector<int> count(4, 0); // A,C,G,T 개수 넣는 코드
  int cnt=0; // 비밀 번호 갯수

  // 자른 문자열의 각 문자 개수 count
  for (char ch:subDNA) {
    if (ch=='A') count[0]++;
    else if (ch=='C') count[1]++;
    else if (ch=='G') count[2]++;
    else if (ch=='T') count[3]++;
  }

  // 자른 문자열에서 각 문자의 최소 조건 체크
  bool pass = true;
  for (int i = 0; i < 4; ++i) {
    if ((i == 0 && count[i] < a) || (i == 1 && count[i] < c) || (i == 2 && count[i] < g) || (i == 3 && count[i] < t)) {
      pass = false;
      break;
    }
  }
  if (pass) cnt++;

  // 슬라이딩 윈도우로 한 걸음씩 이동
  for (int i = 1; i <= n - m; ++i) {
    char out=DNA[i - 1];
    char in=DNA[i + m - 1];

    if (out=='A') count[0]--;
    else if (out=='C') count[1]--;
    else if (out=='G') count[2]--;
    else if (out=='T') count[3]--;

    if (in=='A') count[0]++;
    else if (in=='C') count[1]++;
    else if (in=='G') count[2]++;
    else if (in=='T') count[3]++;

    // 한 걸음씩 이동한 거에서 조건 체크
    pass = true;
    for (int j = 0; j < 4; ++j) {
      if ((j == 0 && count[j] < a) || (j == 1 && count[j] < c) || (j == 2 && count[j] < g) || (j == 3 && count[j] < t)) {
        pass = false;
        break;
      }
    }
    if (pass) cnt++;
  }

  cout<<cnt;

  return 0;
}