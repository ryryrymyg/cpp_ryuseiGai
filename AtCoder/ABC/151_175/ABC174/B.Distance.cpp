#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  ll N, D;
  cin >> N >> D;

  vector<vector<ll>> A(N,vector<ll>(2));
  rep(i,N)cin >> A.at(i).at(0) >> A.at(i).at(1);

  ll ans = 0;
  rep(i, N){
    if((pow(abs(A.at(i).at(0)), 2) + pow(abs(A.at(i).at(1)),2)) <= (double)pow(D, 2) + 0.2) ++ans;
    //cout << pow(A.at(i).at(0), 2) + pow(A.at(i).at(1), 2) << endl;
    //cout << ans << endl;
    //cout << pow(D,2) << endl;
  }

  cout << ans << endl;
}
