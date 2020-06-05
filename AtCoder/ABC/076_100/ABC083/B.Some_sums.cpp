#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

int main(){
  int N, A, B;
  cin >> N >> A >> B;

  int tmp=0;

  rep(i, N+1){
    int value=0;
    int con = i;
    rep(j,5){
      value += con%10;
      con /= 10;
    }
    if((A<=value)&&(value<=B)) tmp += i;
  }

  cout << tmp << endl;
}
