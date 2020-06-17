#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

int main(){
  int N;
  cin >> N;

  int Y;
  cin >> Y;
  int M=-1, G=-1, S=-1;

  int total=0;

  for(int i = 0; i < N+1; i++){
    for(int j = 0; j < N-i+1; j++){
      total = i * 10000 + j * 5000 + (N-i-j) * 1000;
      if(total == Y){
        M = i; G = j; S = N-i-j;
      }
    }
  }

  cout << M << " " << G << " " << S << endl;
}
