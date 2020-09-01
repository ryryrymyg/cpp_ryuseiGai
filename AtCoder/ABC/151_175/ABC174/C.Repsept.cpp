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

int N = 1000008;

int main(){
  int K;
  cin >> K;
  mod = K;
  mint V(7);
  ll ans = -1;
  rep(i, N){
    if(V.x == 0){
      ans = i+1;
      break;
    }
    V *= 10;
    V += 7;
  }

  cout << ans << endl;
}
