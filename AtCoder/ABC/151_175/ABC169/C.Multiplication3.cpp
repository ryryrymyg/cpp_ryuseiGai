#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

int main(){
  int64_t a;
  long double b;/*
  double b_int;
  double b_fra;
*/
  cin >> a;
  cin >> b;

//  b_fra = modf(b, &b_int);

  int64_t inb = b * 100 + 0.5;

  int64_t Ans = ((a*inb)/100);

  cout << Ans << endl;
}
