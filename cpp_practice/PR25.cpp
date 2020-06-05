//bit全探索

#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

int main(){
  int N, K;
  cin >> N >> K;

  string result = "NO";

  vector<int> A(N);
  rep(i, N){
    cin >> A.at(i);
  }

  //すべての組み合わせを試す（bit全探索)
  for (int tmp = 0; tmp < (1 << 20); tmp++){
    bitset<20> s(tmp);//最大20要素あるので、20桁のbit列

    //bit列の対応桁数が1の時その数をsumに入れる
    int sum = 0;
    rep(i, N){
      if(s.test(i)){
        sum += A.at(i);
      }
    }

    if(sum == K) result = "Yes";
  }

  cout << result << endl;

}
