#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  int H, W, K;
  cin >> H >> W >> K;
  vector<vector<char>> mass_m(6, 6, '.');
  rep(i,H){
    rep(j,W){
      cin >> mass_m.at(i).at(j);
    }
  }

  rep(i, (1 << H)){
    vector<vector<char>> mass = mass_m;
    rep(j, (1 << W)){
      bitset<6> s(tmp);
      rep(k, H){
        if(s.test(k)){
          rep(l,W){
            mass.at(k).at(l) = '.';
          }
        }
      }
      rep(k,W){
        if(s.test(k)){
          rep(l,H){
            mass.at(l).at(k) = '.';
          }
        }
      }
    }

    rep(j, H){

    }
  }

}
