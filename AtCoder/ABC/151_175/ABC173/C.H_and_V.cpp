#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  int H, W, K;
  cin >> H >> W >> K;

  vector<bitset<6>> mass(6);

  rep(i,6){
    mass.at(i).reset();
  }

  string tmp;
  rep(i, H){
    cin >> tmp;
    rep(j, W){
      if(tmp[j] == '#'){
        mass.at(i).set(j);
      }
    }
  }

  int ans = 0;
  rep(i, (1<<H)){
    bitset<6> h(i);

    rep(j, (1<<W)){
      bitset<6> w(j);
      int count = 0;

      rep(k,H){

        rep(l, W){
          bool cond1 = ((!h.test(k)&&(!w.test(l))) && (mass.at(k).test(l)));
          if(cond1){
            count++;
          }
        }

      }
      if(count == K) ans++;

    }
  }

  cout << ans << endl;
}
