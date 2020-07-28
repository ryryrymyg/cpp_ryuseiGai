#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  int A, B, C;
  cin >> A >> B >> C;

  int K;
  cin >> K;

  bool flag = false;

  for (int i = 0; i <= K; i++){
    int A1 = A * pow(2,i);
    for(int j = 0; j <= K-i; j++){
      int B1 = B * pow(2,j);
      int C1 = C * pow(2,K-i-j);
      if((C1>B1)&&(B1>A1)) flag = true;
      if(flag) break;
    }
    if(flag) break;
  }

  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;

}
