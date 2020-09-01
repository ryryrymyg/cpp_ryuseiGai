#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int nibun(vector<int> &A, int siz){
  int b = A[siz];
  return b;
}

int main(){
  ll N;
  cin >> N;

  vector<ll> A(N);
  rep(i,N){
    cin >> A[i];
    A[i] -= (i+1);
  }

  ll minimum = 0;

  sort(A.begin(), A.end());


}
