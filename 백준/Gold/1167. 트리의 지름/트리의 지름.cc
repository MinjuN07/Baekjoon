#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int las;
int dis;
bool vis_d[100001];
bool vis_b[100001];
vector<pair<int,int>> graph[100001];
void bfs(int x);
void dfs(int x, int t);

int main() {
  int V,n,f,d;
  cin >> V;
  for(int i=0;i<V;i++) {
    cin >> f;
    while(1) {
      cin >> n;
      if(n==-1) break;
      cin >> d;
      graph[f].push_back({n,d});
    }
  }
  bfs(1);
  dfs(las,0);
  cout << dis;
  return 0;
}

void bfs(int x) {
  dis = 0;
  queue<pair<int,int>> q;
  q.push({x,0});
  vis_b[x] = true;

  while (!q.empty()) {
    int node = q.front().first;
    int dist = q.front().second;
    q.pop();

    if (dist > dis) {
      dis = dist;
      las = node;
    }

    for (int i = 0; i < graph[node].size(); i++) {
      int y = graph[node][i].first;
      int d = graph[node][i].second;
      if (!vis_b[y]) {
        q.push({y,dist+d});
        vis_b[y] = true;
      }
    }
  }
}

void dfs(int x,int t) {
  vis_d[x] = true;
  if (dis < t) dis = t;
  for(int i=0;i<graph[x].size();i++) {
    int y = graph[x][i].first;
    int d = graph[x][i].second;
    if(!vis_d[y]) dfs(y,t+d);
  }
}