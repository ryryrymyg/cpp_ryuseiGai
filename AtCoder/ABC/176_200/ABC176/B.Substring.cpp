#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int main(){
  string S, T;
  cin >> T >> S;

  vector<vector<bool>> Ss(1000, (vector<bool> (1000, false)));

  rep(i, (int)(T.size()-S.size()+1)){
    //cout << 22 << endl;
    rep(k, (int)S.size()) if(S[k] == T[i]){
      rep(j, (int)S.size()){
        if(S[j]==T[i+j]){
          Ss.at(i).at(j) = true;
        }
        //cout << Ss.at(i).at(j)<<endl;
      }
    }
  }

  int max=0;
  int max_val;
  rep(i, 1000){
    int now = count(Ss.at(i).begin(), Ss.at(i).end(), true);
    if(now > max) max=now;
  }

  max_val=(int)S.size() - (int)max;
  cout << max_val <<endl;
}
