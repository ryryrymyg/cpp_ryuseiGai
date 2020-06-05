#include <bits/stdc++.h>

using namespace std;

int main(){
  //それぞれの数の入力
  int64_t A, B, C;
  cin >> A >> B >> C;
  //何枚選ぶか
  int64_t K;
  cin >> K;
  //答えans
  int64_t ans;
  //K<A ans = K
  //K< A+B ans =A(同上)
  //それ以外はans = A-(K-A-B)=2A+B-K
  if (K < A){
    ans = K;
  }
  else if(K < A+B){
    ans = A;
  }
  else{
    ans = 2*A + B - K;
  }

  cout << ans << endl;
}
