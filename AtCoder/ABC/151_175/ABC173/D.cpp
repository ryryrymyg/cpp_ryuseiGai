#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  int N;
  cin >> N;
  vector<ll> V(N);
  rep(i,N) cin >> V.at(i);

  sort(V.begin(), V.end());
  reverse(V.begin(), V.end());

  ll ans = 0;
  for(int i = 0; i < N-1;i++){
    ans += V.at(i);
  }
  cout << ans << endl;
}
