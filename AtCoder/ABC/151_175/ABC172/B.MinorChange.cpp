#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  string S;
  string T;

  cin >> S >> T;

  int cnt = 0;
  for(int i = 0; i < (int)S.size(); ++i){
    if(S.at(i) != T.at(i)){
      cnt++;
    }
  }

  cout << cnt << endl;
}
