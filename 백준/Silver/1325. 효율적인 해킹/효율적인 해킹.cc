#include<iostream>
#include<vector>
#include <algorithm>
#include <queue>
using namespace std;

vector<bool> visit_bfs;
vector<int> graph[100000];
vector<int> res;


void bfs(int x) {
  queue<int> q;
  q.push(x);
  visit_bfs[x] = true;

  while(!q.empty()) {
    int x = q.front();
    q.pop();
    for(int i:graph[x]) {
      if (!visit_bfs[i]) {
        q.push(i);
        visit_bfs[i] = true;
        res[i]++;
      }
    }
  }

}

int main() {
  int N, M;
  cin >> N >> M;
  visit_bfs.resize(N+1);
  res.resize(N+1);
  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    graph[a].push_back(b);
  }
  
  for (int i=1;i<=N;i++) {
    bfs(i);
    fill(visit_bfs.begin(), visit_bfs.end(), false);
  }
  
  int Max = 0;
  for (int i=1;i<=N;i++) {
    Max = max(Max, res[i]);
  }

  for (int i=1;i<=N;i++) {
    if (res[i] == Max) {
      cout << i << ' ';
    }
  }
}