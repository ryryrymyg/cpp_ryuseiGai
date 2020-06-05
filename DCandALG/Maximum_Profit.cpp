#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

int main(){
  //それまでの最低価格を保持して、最高価格との差も保持する
  //2*10^5なので計算量O(n)まで

  int64_t n;
  cin >> n;

  int64_t max_deff = -10000000000;
  int64_t min_v = 10000000000;

  rep(i,n){
    int64_t v;
    cin >> v;
    if (max_deff < v - min_v) max_deff = v - min_v;
    if (min_v > v) min_v = v;
  }

  cout << max_deff << endl;

}
