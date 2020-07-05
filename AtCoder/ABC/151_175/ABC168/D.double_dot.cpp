#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;

int INF = 100007;

void make_tree(vector<int> &r, vector<int> &d){
  int room, way;
  cin >> room >> way;

  if(d.at(room) > d.at(way)+1){
    d.at(room) = d.at(way)+1;
    r.at(room) = way;
  }
  else if(d.at(room) < d.at(way)){
    d.at(way) = d.at(room)+1;
    r.at(way) = room;
  }
}

int main(){
  int N, M;
  cin >> N >> M;

  vector<int> room(N);
  vector<int distance(N, INF);
  distance.at(1) = 0;
  vector<bool> flags(N, false);
  bool flag = true;

  rep(i,M){
    make_tree(room, distance);
  }

  for(int i = N; i > 1; --i){
    if()
  }

  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;

  for(int i = 1; i < N ; i++) cout << room << endl;

}
