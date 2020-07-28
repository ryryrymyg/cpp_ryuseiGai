#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  int L, R, d;
  cin >> L >> R >> d;

  int sum = 0;
  for(int i = L; i <= R; i++){
    if(i%d == 0) sum++;
  }

  cout << sum << endl;
}
