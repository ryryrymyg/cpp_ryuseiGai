#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  int N, M;
  cin >> N >> M;

  vector<set<int>> map(N+1);

  int A, B;
  rep(i, M){
    cin >> A >> B;
    map.at(A).insert(B);
    map.at(B).insert(A);
  }

  int max=0;

  rep(i,N){
    int now = map.at(i).size();
    if(now > max) max = now;
  }

  cout << max+1 << endl;
}
