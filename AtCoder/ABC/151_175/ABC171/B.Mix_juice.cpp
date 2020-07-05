#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;

int main(){
  int N, K;
  cin >> N >> K;

  vector<int> A(N);

  rep(i, N) cin >> A.at(i);
  sort(begin(A), end(A));

  int sum = 0;
  rep(i, K){
    sum += A.at(i);
  }

  cout << sum << endl;
}
