#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

int main(){
  int x, y;
  cin >> x >> y;

  int total = 0;

  for(int i = 0; i < (x+1); i++){
    total = 0;
    total += 2*i;
    total += 4*(x-i);

    if(total == y){
      cout << "Yes" << endl;
      break;
    }

    if(i == x){
      cout << "No" << endl;
    }
  }
}
