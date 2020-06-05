#include <bits/stdc++.h>

using namespace std;

//全探索でやる

int main(){
  int N;
  cin >> N;

  vector<int> data(N);
  for(int &d : data){
    cin >> d;
  }

  int64_t mvalue = -10000000000;

  //n-1番目までの要素について調査
  for(int i = 0; i < (N-1); i++){
    //次以降の要素についてmvalue<deffなら代入
    for(int j = i+1; j < N; j++){
      if(mvalue < data.at(j) - data.at(i)){
        mvalue = data.at(j) - data.at(i);
      }
    }
  }

  cout << mvalue << endl;
}
