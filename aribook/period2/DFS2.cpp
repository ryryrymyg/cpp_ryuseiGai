/*******************************************
LakeCounting(POJ:2386)
大きさN*Mの庭にある湖の数を数える。
8近傍で隣接している場合つながっているとみなす。
*******************************************/

#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

void dfs(vector<string> &G, int i, int j){
  G.at(i).at(j) = '.';

  bool flag1 = true;
  bool flag2 = true;
  if(j+1 < (int)G.at(i).size()){
    if(G.at(i).at(j+1) == 'W') dfs(G, i, j+1);
  }
  else flag1 = false;

  if(i+1 < (int)G.size()){
    if(G.at(i+1).at(j) == 'W') dfs(G, i+1, j);
  }
  else flag1 = false;

  if((flag1)&&(G.at(i+1).at(j+1) == 'W')) dfs(G, i+1, j+1);


  if((j-1 < 0)||(i+1 >= (int)G.size())){
    flag2 = false;
    //cout << "no!" << endl;
  }
  //else cout << "Yes!" << endl;

  if((flag2)&&(G.at(i+1).at(j-1) == 'W')) dfs(G, i+1, j-1);

}

int main(){
  int N, M;
  cin >> N >> M;

  vector<string> Garden(N);
  rep(i,N) cin >> Garden.at(i);

  int cnt = 0;

  rep(i, N){
    while(!(Garden.at(i).find("W") == string::npos)){
      dfs(Garden, i, Garden.at(i).find("W"));
      cnt++;
    }
    cout << cnt << endl;
  }

  cout << cnt << endl;
}
