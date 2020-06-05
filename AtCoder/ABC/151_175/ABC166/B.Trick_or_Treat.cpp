#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

int main(){
  int N, K;
  cin >> N >> K;

  set<int> treat;
  int d;
  int tmp;

  rep(i, K){
    cin >> d;
    rep(j, d){
      cin >> tmp;
      treat.insert(tmp);
    }
  }

  int cnt=0;
  for(int i = 1; i < N+1; i++){
    if(!treat.count(i)) cnt++;
  }

  cout << cnt << endl;

}
