#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

int main(){
  int X, Y;
  cin >> X >> Y;

  int total;

  if(X > 50){
    cout << "No" << endl;
    return 0;
  }

  for (int64_t tmp = 0; tmp < ((int64_t)1 << 50); tmp++){
    bitset<50> s(tmp);
    total = 0;
    rep(i, X){
      if(s.test(i)){
        total += 2;
      }
      else{
        total += 4;
      }
    }
    if (total == Y){
      cout << "Yes" << endl;
      break;
    }

    if(tmp == ((1 << X)-1)){
      cout << "No" << endl;
    }
  }
}
