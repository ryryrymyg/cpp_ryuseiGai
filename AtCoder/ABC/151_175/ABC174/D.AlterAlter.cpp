#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  int N;
  cin >> N;

  vector<char> S(N);
  rep(i,N) cin >> S.at(i);

  int Rs =0, Ws = 0;
  rep(i,N){
    if(S.at(i) == 'W') ++Ws;
    else Rs++;
  }

  int Ru = 0;
  rep(i,Rs){
    if(S.at(i)=='R') ++Ru;
  }

  cout << Rs - Ru << endl;
}
