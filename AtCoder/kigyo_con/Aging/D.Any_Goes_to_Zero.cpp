#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int pcnt(int x){
  return __builtin_popcount(x);
}

int f(int r){
  if(r == 0) return 0;
  return f(r%pcnt(r))+1;
}

int main(){
  int N;
  cin >> N;
  string s;
  cin >> s;

  vector<int> x(N);
  rep(i, N) x.at(i) = s.at(i) - '0';

  int pc = 0;
  rep(i, N) pc+=x.at(i);


  vector<int> ans(N);

  rep(b,2){
    int npc = pc;
    if(b == 0) npc++; else npc--;
    if(npc <= 0)continue;

    int r0 = 0;
    rep(i,N){
      r0 = (r0*2) % npc;
      r0 += x.at(i);
    }

    int k = 1;
    for(int i = N - 1; i >= 0; --i){
      if(b == x.at(i)){
        int r = r0;
        if(b==0) r = (r + k) % npc; else r = (r-k + npc) % npc;
        ans.at(i) = f(r) + 1;
      }
      k = (k*2) % npc;
    }
  }

  rep(i, N) {cout << ans.at(i) << endl;}
}
