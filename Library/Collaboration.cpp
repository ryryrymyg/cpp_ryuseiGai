#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int fac(int n, int k){
  if(n < k) return 0;
  if(k==1) return n;
  return n * fac(n-1, k-1);
}

int comb(int n, int k){
  return (fac(n, k) / fac(k,k));
}

int main(){
  cout << comb(6,3) << endl;
}
