#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

int main(){
  int x;

  rep(i, 5){
    cin >> x;
    //cout << x << i << endl;
    if (x == 0){
      cout << i+1 << endl;
    }
  }
}
