#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int M = 200005;

int main(){
  ll N, K;
  cin >> N >> K;
  vector<ll> A(N);
  rep(i,N) cin >> A.at(i);

  int first =0, last=1e9;
  while(last-first > 1){
    int x = (first+last)/2;
    auto f = [&](int x){
      ll now = 0;
      rep(i,N){
        now += (A.at(i)-1)/x;
      }
      return now <= K;
    };
    if(f(x)) last = x; else first = x;
  }
  cout << last << endl;
  return 0;
}
