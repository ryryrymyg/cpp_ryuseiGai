#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  int N;
  cin >> N;
  int ans;
  if(N >= 1800) ans = 1;
  else if(N >= 1600) ans = 2;
  else if(N >= 1400) ans = 3;
  else if(N >= 1200) ans = 4;
  else if(N >= 1000) ans = 5;
  else if(N >= 800) ans = 6;
  else if(N >= 600) ans = 7;
  else ans = 8;

  cout << ans << endl;
}
