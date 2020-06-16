#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

int M = 1000005;

int main(){
  int N;
  cin >> N;

  vector<int> Ai(N);
  vector<int> nums(M+1);
  rep(i,N){
    cin >> Ai.at(i);
  }

  sort(Ai.begin(), Ai.end());

  for(int a : Ai){
    if(nums.at(a) != 0){
      nums.at(a) = 2;
      continue;
    }
    for(int i = a; i < M; i+=a){
      nums.at(i) = 1;
    }
  }

  int ans = 0;

  for(int a : Ai){
    if(nums.at(a)==1) ans++;
  }

  cout << ans << endl;
}
