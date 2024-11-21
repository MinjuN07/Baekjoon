#include<iostream>
#include<vector>
#include <algorithm>
#include <queue>
using namespace std;

bool visit_bfs[300001];
vector<int> graph[300001];
vector<int> res(300001,1000001);
vector<int> res2;

void bfs(int x,int k) {
  queue<int> q;
  q.push(x);
  visit_bfs[x] = true;
  res[x] = 0;

  while(!q.empty()) {
    int x = q.front();
    q.pop();
    for(int i=0; i<graph[x].size();i++) {
      int y = graph[x][i];
      if (!visit_bfs[y]) {
        q.push(y);
        visit_bfs[y] = true;
        if(res[y] > res[x]+1) res[y] = res[x]+1;
        if(res[y] == k) {res2.push_back(y);}
      }
    }
  }
}

int main() {
  int N, M, K, X;
  cin >> N >> M >> K >> X;
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    graph[a].push_back(b);
  }
  bfs(X, K);
  sort(res2.begin(),res2.end());
  if (res2.empty())
    cout << -1;
  else {
    for (auto i: res2) {
      cout << i << "\n";
      }
    }
}
