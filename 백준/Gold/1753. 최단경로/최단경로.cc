#include <iostream>
#include <vector>
#include <set>
#include <limits>
using namespace std;

const int INF = numeric_limits<int>::max(); // MAX 계산을 위해서
vector<pair<int, int>> gra[20001];
vector<int> dis(20001, INF); // 거리 == 가중치

void f(int start) {
  set<pair<int, int>> s; // set의 자동정렬 기능 사용
  dis[start] = 0; // 자기 자신은 거리는 0으로함
  s.insert({0, start}); // 자기 자신이니 최단거리는 0을 넣음

  while (!s.empty()) {
    int cur = s.begin()->second; // 현재 노드
    s.erase(s.begin());

    for (auto& j : gra[cur]) { // 현재 노드와 연결된 다른 노드들
      int nxt = j.first; // 다음 노드
      int wei = j.second; // 다음 노드 까지의 가중치

      if (dis[cur]+wei < dis[nxt]) { // 만약 미리 알고 있던 최단거리보다 더 짧은 최단거리라면
        s.erase({dis[nxt],nxt}); // 이전 거리 정보 제거
        dis[nxt] = dis[cur]+wei; // 갱신
        s.insert({dis[nxt],nxt}); // set에 정보 넣어줌
      }
    }
  }
}

int main() {
  int V,E,K,u,v,w;
  cin >> V >> E >> K;

  for (int i=0;i<E;i++) {
    cin >> u >> v >> w;
    gra[u].push_back({v,w});
  }

  f(K); // 다익스트라

  for (int i=1;i<=V;i++) {
    if (dis[i] == INF) {
      cout << "INF\n";
    } else {
      cout << dis[i] << '\n';
    }
  }
  return 0;
}