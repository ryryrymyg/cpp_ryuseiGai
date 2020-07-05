#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int mod = 1000007;
struct mint {
  ll x;
  /****************************************
                コンストラクタ
  クラス名(引数1, 引数2, 引数3, ..):
      変数1(変数に代入する値), 変数2(..), ..
        {}
  //**************************************/
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

int main(){
  mint a(30000000);
  mint b(428792075);

  cout << a.x << endl;
  cout << b.x << endl;

  cout << (a += b).x << endl;
  cout << (a -= b).x << endl;
  cout << (a *= b).x << endl;
  cout << (a + b).x << endl;
  cout << (a - b).x << endl;
  cout << (a * b).x << endl;
}
