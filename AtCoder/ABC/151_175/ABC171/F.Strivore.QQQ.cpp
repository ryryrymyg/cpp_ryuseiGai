#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int mod = 1000000007;
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


int fac(int n, int k){
  if(n < k) return 0;
  if(k==1) return n;
  return n * fac(n-1, k-1);
}

int comb(int n, int k){
  return (fac(n, k) / fac(k,k));
}

int main(){
  int K, n;
  cin >> K;

  string S;
  cin >> S;

  n = S.size();

  mint ans = 0;
  for (int i = 0; i <= K; ++i){
    mint now =mint(26).pow(K-i);
    now *= mint(25).pow(i);
    now *= mint(comb(i+n-1, n-1));
    ans += now;
  }
  cout << ans.x << endl;
  return 0;
}
