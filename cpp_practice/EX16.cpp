#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  for(int i = 0; i < 5; i++) {
      if(i != 4){
        if(data.at(i) == data.at(i+1)){
            cout << "YES" <<endl;
            break;
        }
      }
      else{
          cout << "NO" << endl;
      }
  }

  // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
  // ここにプログラムを追記
}
