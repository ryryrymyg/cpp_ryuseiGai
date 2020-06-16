#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

int main(){
  int X, N;
  cin >> X >> N;

  set<int> ps;
  int cns;

  rep(i, N){
    cin >> cns;
    ps.insert(cns);
  }

  int min_val = 0;
  int min_deff = 1000;

  for(int i = 101; i > -3 ; i--){
    if(!ps.count(i)){
      if((X-i)>0){
        if((X-i)<=min_deff){
          min_val = i;
          min_deff = X-i;
        }
      }
      else{
        if((i-X)<=min_deff){
          min_val = i;
          min_deff = i-X;
        }
      }
    }
  }

  cout << min_val << endl;
}
