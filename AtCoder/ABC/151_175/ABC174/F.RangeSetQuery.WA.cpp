#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  int N, Q;
  cin >> N >> Q;
  vector<int> c(N);
  rep(i, N) cin >> c.at(i);

  vector<vector<int>> query(Q, vector<int>(2));
  rep(i,Q) cin >> query.at(i).at(0) >> query.at(i).at(1);

  vector<int> ref(N+1, 0);
  vector<int> nearest(N, 0);

  rep(i,N){
    ref.at(c.at(i)) = i;
    nearest.at(i) = ref.at(c.at(i));
  }

  int first;
  int last;

  int cnt;

  rep(i,Q){
    cnt=0;
    first = query.at(i).at(0)-1;
    last = query.at(i).at(1)-1;


  }
}
