#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  int N;
  cin >> N;
  int a, sum = 0;
  rep(i, N){
    cin >> a;
    if(!(i%2)){
      if(a%2) sum++;
    }
  }

  cout << sum << endl;
}
