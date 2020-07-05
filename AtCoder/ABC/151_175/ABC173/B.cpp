#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  int N;
  cin >> N;

  vector<string> TELS ={"AC", "WA", "TLE", "RE"};
  vector<int> ans(4);
  string tmp;
  rep(i, N){
    cin >> tmp;
    rep(j,4){
      if(tmp == TELS.at(j)){
        ans.at(j)++;
      }
    }
  }
  rep(i,4){
    cout << TELS.at(i) << " x " << ans.at(i) << endl;
  }
}
