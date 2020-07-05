#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  int N;
  cin >> N;
  if((N%1000)){
    cout << 1000-(N%1000) << endl;
  }
  else{
    cout << 0 << endl;
  }
}
