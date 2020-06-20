/***************************************
整数がｎ個与えられて、それらを任意の数の和が
整数kになるか判定するプログラム
***************************************/

#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

bool cond_add(int N, vector<int> &a, int k, int i, int sum);

int main(){

  int N;
  cin >> N;

  vector<int> a(N);
  rep(i,N) cin >> a.at(i);

  int k;
  cin >> k;
  int sum = 0;

  int i = 0;

  bool can = cond_add(N, a, k, i, sum);

  if(can) cout << "Yes" << endl;
  else cout << "No" << endl;
}

bool cond_add(int N, vector<int> &a, int k, int i, int sum){
  if(i == N) return sum == k;

  if(cond_add(N, a, k, i+1, sum)) return true;

  if(cond_add(N, a, k, i+1, sum + a.at(i))) return true;

  return false;
}
