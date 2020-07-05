#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
const int INF = 100000000;

int main(){
  int N, M;
  cin >> N >> M;

  vector<string> maze(N); //迷路の座標
  int sx, sy; //スタートの座標
  int gx, gy; //ゴールの座標

  vector<vector<int>> d(N, M); //距離の配列
  vector<int> dx = {1, 0, -1, 0}, dy = {1, 0, -1, 0}; //移動の配列

  //sx, syからgx, gyへの最短距離を求める。
  //BFS
  queue<P> que;
}
