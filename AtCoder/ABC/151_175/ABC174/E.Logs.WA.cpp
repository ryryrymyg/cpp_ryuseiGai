#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  ll N, K;
  cin >> N >> K;
  vector<ll> A(N);
  rep(i,N) cin >> A.at(i);
//  rep(i,N) cout << A.at(i) << endl;

  ll max_size;
  size_t max_index;
  int maxIt;
  rep(i, K){
    max_size = *max_element(A.begin(), A.end());
    maxIt = max_element(A.begin(), A.end())-A.begin();
    max_index = distance(A.begin(), A.begin()+maxIt);
    //cout << max_size << endl;    cout << max_index << endl;
    A.at(max_index) = max_size/2;
    A.emplace_back(max_size-max_size/2);
    //rep(i, A.size()) cout << A.at(i) << endl; cout << endl;
  }

  int ans = *max_element(A.begin(), A.end());

  cout << ans << endl;
}
