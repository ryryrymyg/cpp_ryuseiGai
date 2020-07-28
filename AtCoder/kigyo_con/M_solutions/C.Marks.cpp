#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  int N, K;
  cin >> N >> K;

  vector<int> A(N);
  rep(i,N) cin >> A.at(i);

  rep(i,N-K){
    if(A.at(K+i)>A.at(i)) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}
