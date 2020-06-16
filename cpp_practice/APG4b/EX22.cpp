#include <bits/stdc++.h>

using namespace std;

void p_insertion_sort_second(int N, vector<pair<int, int>> &ps){

  //sort開始
  for (int i = 1; i < N; i++){
    //一旦pairをvにいれて、それより一戸前をみる
    auto v = ps.at(i);
    int j = i - 1;

    //配列を一つずつ遡りながら自分より小さい値に至るまで配列を右にずらす
    while ((j >= 0) && (ps.at(j).second > v.second)){
      ps.at(j+1) = ps.at(j);
      j--;
    }
    //自分より小さい値を見つける、若しくは先頭に到達したら、そこに挿入
    ps.at(j+1) = v;

  }
}

int main(){
  int N;
  cin >> N;

  //ペアを入力
  vector <pair<int, int>> ps(N);

  for (auto &pps: ps){
    cin >> pps.first >> pps.second;
  }

  //psをペア後半の値で挿入ソート
  p_insertion_sort_second(N, ps);

  //出力
  for (auto pps: ps){
    cout << pps.first << " " << pps.second << endl;
  }
}
