#include<iostream>
#include<vector>
#include <algorithm>
#include <queue>

using namespace std;
bool visit_dfs[1001];
bool visit_bfs[1001];
vector<int> graph[10001];

void dfs(int x) {
  cout << x << " ";
  visit_dfs[x] = true;
  for(int i=0;i<graph[x].size();i++) {
    if(graph[x][i] == 0) continue;
    int y = graph[x][i];
    if(!visit_dfs[y]) dfs(y);
  }
}

void bfs(int x) {
  queue<int> q;
  q.push(x);
  visit_bfs[x] = true;

  while(!q.empty()) {
    int x = q.front();
    q.pop();
    cout << x << ' ';

    for(int i=0; i<graph[x].size();i++) {
      int y = graph[x][i];
      if (!visit_bfs[y]) {
        q.push(y);
        visit_bfs[y] = true;
      }
    }
  }
}


int main(){
  int N,M,V;
  int u,v;

  cin>>N>>M>>V;

  for(int i=0;i<M;i++) {
    cin>>u>>v;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }
  for(int i=1;i<=M;i++) {
    sort(graph[i].begin(),graph[i].end());
  }
  dfs(V);
  cout << '\n';
  bfs(V);
  return 0;
}