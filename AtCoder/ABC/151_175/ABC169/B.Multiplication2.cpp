#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

int main(){
  int N;
  cin >> N;

  vector<int64_t> A(N);
  bool flag = false;

  rep(i,N){
    cin >> A.at(i);
    if(A.at(i) == 0){
      flag = true;
    }
  }

  int64_t Ans=1;
  rep(i,N){
    Ans *= A.at(i);
    //if(Ans < 0) break;
  }

  if((Ans <= 0)||(Ans > 1000000000000000000)){
    Ans = -1;
  }

  if(flag){
    Ans = 0;
  }

  cout << Ans << endl;
}
