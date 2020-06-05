#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

vector<int> Eratosthenes(int64_t N){
  //2~Nまでの真偽値表。trueで初期化。
  vector<bool> is_prime(N+1, true);
  int lim = (int)sqrt(N)+1;

  //以下ループ。2~Nについてエラトステネス適用
  for (int i = 2; i < lim; i++){
    if(is_prime.at(i)){
      for(int j = i*2; j < N+1; j += i){
        is_prime.at(j) = false;
      }
    }
  }
  //素数リスト
  vector<int> P;
  for(int i = 2; i < N+1; i++){
    if(is_prime.at(i)) P.emplace_back(i);
  }

  return P;
}


int main(){
  int64_t N;
  cin >> N;

  int counter = 0;

  while(true){
    vector<int> P = Eratosthenes((int64_t)sqrt(N));
    bool flag = false;
    for(int &p : P){
      for(int i = 1; p < N; i++){
        if(N % p == 0){
          counter++;
          N = N/p;
          flag = true;
        }
        p = p+p;
        if(flag) break;
      }
      if(flag) break;
    }
    if(N==1) break;
  }
  //vector<int> P = Eratosthenes((int64_t)sqrt(N));

  cout << counter << endl;

}
