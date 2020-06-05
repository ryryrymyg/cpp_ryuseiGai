//素因数分解
//それぞれの素数に関して、指数数え上げ

#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for( i = 0; i < (n); i++)

void prime_factorization(int64_t &num, queue<int64_t> &primes){
  while(num%2 == 0){
    num /= 2;
    primes.push(2);
  }

  for(int i = 3; (i*i) <= num; i+=2){
    while(num%i == 0){
      num /= i;
      primes.push(i);
    }
  }
  if(num != 1) primes.push(num);
}

void cnt_doable(queue<int64_t> &primes){
  //使用済み数字リスト
  set<int64_t> pre;

  //while qが空になるまで
  while(!primes.empty()){
    //*0primesの前から素因数pを取り出す。
    int64_t p = primes.front();
    primes.pop();
    //*1 preに入っているか判定
    if(!pre.count(p)){
      pre.insert(p);//入っていなければp|->pre;->*0
      continue;
    }
    else{
      //入っていればprimesの最前を見る
      //同じ数字なら先頭を取り出しp *= p;->*1
      //違う数字->*0
      int64_t q = p;
      while(q == primes.front()){
        p *= p;
        primes.pop();
        if(!pre.count(p)) {
          pre.insert(p);
          break;
        }
      }
    }
  }
  cout << pre.size() << endl;//preのサイズを出力
}

int main(){
  int64_t N;
  cin >> N;

  queue<int64_t> A;

  prime_factorization(N, A);

  //試行回数数える。
  cnt_doable(A);
}
