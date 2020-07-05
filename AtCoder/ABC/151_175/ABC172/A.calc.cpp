#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int twice(int x){
  return x * x;
}

int tri(int x){
  return x * x * x;
}

int main(){
  int a;
  cin >> a;

  cout << a + twice(a) + tri(a) << endl;
}
