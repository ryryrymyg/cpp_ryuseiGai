#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int const INF = 200007;

int biserch(int N, vector<int> &vec, int crtans){
  int mid = N/2;
  int def = INF, bdef;
  bool flag = true;

  int ans = N, bans = N;

  while(true){
    bdef = def;
    def = abs(crtans - B.at(mid));
    bans = ans;
    ans = mid;
    if(def >= bdef){
      return bans;
    }
    if(def == 0){
      return ans;
    }

    if(B.at(mid) > crtans){
      mid = mid - abs(bans - ans)/2 - 1;
    }
    else{
      mid = mid + abs(bans - ans)/2 + 1;
    }
  }

  return ans;
}

int main(){
  int N, M;
  cin >> N >> M;

  int K;
  cin >> K;
  vector<int> A(N+1);
  vector<int> B(M+1);
  int tmp;

  A.at(0) = 0;
  rep(i,N){
    cin >> tmp;
    A.at(i+1) = tmp;
  }

  sum = 0;
  B.at(0) = sum;
  rep(i,M){
    cin >> tmp;
    sum += tmp;
    B.at(i+1) = sum;
  }

  int maxim = 0;
  int ans = 0;
  rep(i, N+1){
    ans = A.at(i) + biserch(M+1, B, K-A.at(i))
    if(maxim < biserch(M+1, B, K-A.at(i))
  }

}
