#include<iostream>
#include<vector>
using namespace std;
bool visit[1001];
vector<int> graph[1001];

void dfs(int x) {
  visit[x] = true;
  for(int i=0;i<graph[x].size();i++) {
    int y = graph[x][i];
    if(!visit[y]) dfs(y);
  }
}

int main(){
  int N,M;
  int u,v;
  int flag = 0;

  cin>>N>>M;

  for(int i=0;i<M;i++) {
    cin>>u>>v;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }

  for(int j=1;j<=N;j++) {
    if(visit[j]) continue;
    flag++;
    dfs(j);
  }
  cout<<flag;
  return 0;
}