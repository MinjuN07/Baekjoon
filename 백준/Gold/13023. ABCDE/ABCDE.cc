#include<iostream>
#include<vector>
using namespace std;

int flag;
bool visit[2001];
vector<int> graph[2001];

void dfs(int x,int num) {
  if(num==5) {flag = 1; return;}
  visit[x] = true;
  for(int i=0;i<graph[x].size();i++) {
    int y = graph[x][i];
    if(!visit[y]) dfs(y,num+1);
  }
  visit[x] = false;
}

int main(){
  int N,M;
  int u,v;

  cin>>N>>M;

  for(int i=0;i<M;i++) {
    cin>>u>>v;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }
  for (int i = 0;i < N;i++) {
    dfs(i, 1);
    if (flag) {
      break;
    }
  }
  if(flag) cout << 1;
  else cout << 0;
  return 0;
}