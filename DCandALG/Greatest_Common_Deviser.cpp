#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
  //ユークリッドの互除法を使う
  //aとbの大小関係をみて、デカい方をl小さい方をmに代入
  int l, m, r = 1;

  if (a >= b){
    l = a;
    m = b;
  }
  else{
    l = b;
    m = a;
  }

  //**ループ**
  while(r != 0){
  //lをmで割ったあまりr（剰余）を求める
    r = l % m;
  //0以外なら、lにmを、mに剰余を代入する。
    l = m;
    m = r;
  //**ループ**
  }

  //0ならlを返す
  return l;
}

int main(){
  int a, b;//数字

  cin >> a >> b;

  cout << gcd(a, b) << endl;
}
