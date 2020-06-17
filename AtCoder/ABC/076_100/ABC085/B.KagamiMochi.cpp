#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

int main(){
  int N;
  cin >> N;

  vector<int> d(N);
  rep(i, N) cin >> d.at(i);

  vector<int> cnt(101);

  rep(i, N){
    cnt.at(d.at(i))++;
  }

  int total=0;
  for(int a : cnt){
    if(a) total++;
  }

  cout << total << endl;
}
