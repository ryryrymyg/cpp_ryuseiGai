/*************************************
          prime_factorization
*************************************/

#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int64_t i = 0; i < (n); i++)

int64_t input_number(void){
  int64_t num;
  cout << "Input the number wanted to PF:";
  cin >> num;

  return num;
}

//肝。受け取るのは素因数分解する数と、素因数を入れるキュー
void prime_factorization(int64_t &num, queue<int64_t> &primes){
  while(num%2 == 0){
    num /= 2;
    primes.push(2);
  }

  for(int64_t i = 3; (i*i) <= num; i+=2){
    while(num%i == 0){
      num /= i;
      primes.push(i);
    }
  }
  if(num != 1) primes.push(num);
}

void show_primes(queue<int64_t> &primes){
  while(!primes.empty()){
    cout << primes.front();
    primes.pop();
    if(!primes.empty()){
      cout << " * ";
    }
  }

  cout << endl;
}

  int64_t num;
  queue<int64_t> primes;//container of prime_nums;
  num = input_number();
  int main(){
  cout << num << " = ";

  prime_factorization(num, primes);

  show_primes(primes);
}

//O(n^(1/2))
