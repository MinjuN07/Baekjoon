#include <stdio.h>
#include <vector>
#include <deque>
using namespace std;

struct dqItem{
    int val;
    int idx;
};

int main() {
  int N,L;
  scanf("%d %d",&N,&L);

  vector<int> D(N,0);

  for(int i=0;i<N;i++) {
    scanf("%d",&D[i]);
  }

  deque<dqItem> dq;
  for(int i=0;i<N;i++) {
    if(!dq.empty() && i-L >= dq.front().idx){
      dq.pop_front();
    }
    while(!dq.empty()) {
      if(dq.back().val < D[i]) break;
      else {
        dq.pop_back();
      }
    }
    dq.push_back({D[i],i});
    printf("%d ",dq.front().val);
  }
  return 0;
}