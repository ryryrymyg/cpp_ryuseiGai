#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  string S;
  cin >> S;

  int len = S.size();

  int sum = 0;

  for(int i = 0; i < (int)(1<<(len-1));i++){
    int posi = 0;
    rep(j, len){
      if((i>>j)&1){
        sum += atoi((S.substr(posi, j-posi)).c_str());
        posi = j;
        //cout << sum << " " << posi << endl;
      }
      else if(j == len-1){
        sum += atoi((S.substr(posi, j-posi)).c_str());
      }
    }
  }

  cout << sum << endl;
}
