#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  int N;
  cin >> N;

  vector<int> A(N);
  rep(i,N) cin >> A.at(i);

  vector<int> bns(N);

  rep(i,N-1){
    if(A.at(i) < A.at(i+1)) bns.at(i) = 0;//buy
    else if(A.at(i) > A.at(i+1)) bns.at(i) = 2;//sell
    else bns.at(i) = 1;
  }


  bns.at(N-1) = 2;

//  rep(i,N) cout << bns.at(i) << endl;

  ll money = 1000, stock = 0;

  rep(i,N){
//    cout << money << endl;
    if(bns.at(i)==1) continue;
    if(bns.at(i)==0){
      stock += money/A.at(i); //ok
      if(money/A.at(i)==0) continue;
      money -= stock*A.at(i); //ok
    }
    if(bns.at(i)==2){
      money += stock*A.at(i);
      stock = 0;
    }
  }

  cout << money << endl;
}
