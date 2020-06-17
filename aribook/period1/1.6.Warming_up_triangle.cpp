#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

int main(){
  int N;
  cin >> N;

  vector<int> A(N);
  rep(i,N){
    cin >> A.at(i);
  }
  sort(A.begin(), A.end());
  reverse(A.begin(), A.end());

  int max_v=0;
  rep(i,N-2){
    for(int j = i+1; j < N-1; j++){
      for(int k = j+1; k < N; k++){
        int L= A.at(i), M = A.at(j), S = A.at(k);
        if((L<(M+S))&&(max_v<L+M+S)){
          max_v = L+M+S;
        }
      }
    }
  }

  cout << max_v <<endl;
}
