#include <bits/stdc++.h>

using namespace std;
void insertion_sort(int N, vector<int> &A){
  //sort開始
  for (int i = 1; i < N; i++){
    //一旦値をvにいれて、それより一個前をみる
    int v = A.at(i);
    int j = i - 1;

    //配列を一つずつ遡りながら自分より小さい値に至るまで配列を右にずらす
    while ((j >= 0) && (A.at(j) > v)){
      A.at(j+1) = A.at(j);
      j--;
    }
    //自分より小さい値を見つける、若しくは先頭に到達したら、そこに挿入
    A.at(j+1) = v;
  }
}

//エラトステネスの篩(N以下の数字)ブール表返すようにする
vector<bool> Eratosthenes(int N){
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
  /*
  //素数リスト
  vector<int> P;
  for(int i = 2; i < N+1; i++){
    if(is_prime.at(i)) P.emplace_back(i);
  }*/

  return is_prime;
}

int prime_count(int N,vector<int> &A){
  int M = A.at(N-1);
  int counter = 0;//カウンター
  vector<bool> is_prime = Eratosthenes(M);

  for (int a : A){
    if(is_prime.at(a)) counter++;
  }

  return counter;
}

int main(){
  int N;
  cin >> N;

  vector<int> A(N);

  for(int &a : A){
    cin >> a;
  }

  insertion_sort(N, A);

  cout << prime_count(N, A) << endl;

}
