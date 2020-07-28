#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  int N;
  cin >> N;

  vector<int> Nums(N+3);
  rep(i,N) cin >> Nums.at(i);

  ll money = 1000;
  ll stocks = 0;

  rep(i,N-1){
    if(Nums.at(i) < Nums.at(i+1)){
      stocks = money / Nums.at(i);
      money += (Nums.at(i+1)-Nums.at(i)) * stocks;
    }
  }

  cout << money << endl;
}
