#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int M = 100005;

int main(){
  int N;
  cin >> N;

  ll sum = 0;
  vector<int> backet(M);

  ll tmp;

  rep(i, N){
    cin >> tmp;
    sum += tmp;
    backet.at(tmp)++;
  }

  int bef, aft, diff;
  cin >> N;
  rep(i, N){
    cin >> bef >> aft;
    diff = aft - bef;

    sum += diff * backet.at(bef);
    cout << sum << endl;

    backet.at(aft) += backet.at(bef);
    backet.at(bef) = 0;
  }
}
