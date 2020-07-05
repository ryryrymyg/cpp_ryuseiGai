#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

typedef pair<int, int> P;

vector<int> dx = {-1, 0, 1, 0};
vector<int> dy = {0, -1, 0, 1};

bool DFS(int t, int sx, int sy, int gx, int gy, int lim){
  //cout << t << " " << "(" << sx << "," << sy << ")" << endl;
  if(sx==gx&&sy==gy&&t==lim){
  //  cout << "Done!" << endl;
    return true;
  }

  if(sx<0||sy<0) return false;

  if (t!=lim){
    for(int i = 0; i < 4; i++){
      if(DFS(t+1, sx + dx.at(i), sy + dy.at(i), gx, gy, lim)) return true;
    }
  }

  return false;
}

int main(){
  int N;
  cin >> N;

  int tmpx = 0, tmpy = 0;
  int goax = 0, goay = 0;

  int time = 0, gtime = 0;
  vector<int> gtimes(N);
  vector<P> gxy(N);

  rep(i, N){
    cin >> gtimes.at(i);
    cin >> gxy.at(i).first >> gxy.at(i).second;
  }

  bool can1 = true;

  rep(i, N){
    gtime = gtimes.at(i);
    goax = gxy.at(i).first, goay = gxy.at(i).second;
    if(!DFS(time, tmpx, tmpy, goax, goay, gtime)){
      can1 = false;
      break;
    }
    time = gtime; tmpx = goax; tmpy = goay;
  }

  if(can1) cout << "Yes" << endl;
  else cout << "No" << endl;
}
