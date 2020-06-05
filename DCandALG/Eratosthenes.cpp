#include <bits/stdc++.h>

using namespace std;

vector<int> Eratosthenes(int N){
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
  int N;
  cin >> N;

  for(int &p : Eratosthenes(N)){
    cout << p << endl;
  }
}
