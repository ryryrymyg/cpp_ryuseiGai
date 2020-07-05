#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  int N;
  cin >> N;

  vector<int> Nums(N);
  rep(i,N) cin >> Nums.at(i);

  int all = 0;
  rep(i,N) all ^= Nums.at(i);
  rep(i,N) Nums.at(i) ^= all;

  rep(i,N) cout << Nums.at(i) << endl;
}
