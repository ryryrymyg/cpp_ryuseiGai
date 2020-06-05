//早いけど大きな数V.max_size以上は扱えない

#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

vector<int64_t> sieve(int64_t N){
  vector<int64_t> res(N+1);
  iota(res.begin(), res.end(), 0);

  for(int64_t i = 2; i*i < (N+1); ++i){
    if(res.at(i) < i) continue;
    for(int64_t j = i*i; j < (N+1); j+=i) //i * k(kはi以下)の場合、先に代入されているため、i^2からでOK
      if (res.at(j) == j) res.at(j) = i;
  }

  return res;
}

vector<int64_t> fast_PF(int64_t N, vector<int64_t> &minfactor){
  vector<int64_t> res;
  while(N > 1){
    res.emplace_back(minfactor.at(N));
    N /= minfactor.at(N);
  }
  return res;
}//O(log(N))


void show_primes(vector<int64_t> &primes){
  for(int64_t i=0; i < primes.size(); i++){
    cout << primes.at(i);
    if(i!=(primes.size()-1)){
      cout << " * ";
    }
    else  cout <<endl;
  }

  cout << endl;
}

int main(){
  int64_t N;
  cin >> N;

  vector<int64_t> minfac = sieve(N);

  vector<int64_t> factors = fast_PF(N, minfac);

  show_primes(factors);
}
