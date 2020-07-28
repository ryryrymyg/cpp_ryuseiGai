#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int mod;

struct mint {
  ll x;
  /****************************************
                コンストラクタ
  クラス名(引数1, 引数2, 引数3, ..):
      変数1(変数に代入する値), 変数2(..), ..
        {}
  ****************************************/
  mint(ll x): x(x%mod){}
  mint& operator+=(const mint a){//operator +=のオーバーヘッド
    (x += a.x)%= mod;
    return *this;
  }
  mint& operator-=(const mint a){
    (x -= mod-a.x) %= mod;
    return *this;
  }
  mint& operator*=(const mint a){
    (x *= a.x) %= mod;
    return *this;
  }
  mint operator+(const mint a){
    mint res(*this);
    return res+=a;
  }
  mint operator-(const mint a){
    mint res(*this);
    return res-=a;
  }
  mint operator*(const mint a){
    mint res(*this);
    return res *= a;
  }

  mint pow(ll t)const{
    if(!t) return 1;
    mint a = pow(t>>1);
    a *= a;
    if(t&1) a*= *this;
    return a;
  }
};


int M = 200000;

int main(){
  int N;
  cin >> N;
  string X;
  cin >> X;

  int cnt = 0
  rep(i,N){
    if(X[i]) cnt++;
  }
  mod = cnt;
  mint Xs = 0;
  rep(i, N){
    if(X[i]) Xs += pow(2,N-i-1);
  }

  rep(i,N){


  }
}
