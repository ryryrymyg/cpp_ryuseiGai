#include <bits/stdc++.h>

using namespace std;

int main(){
  //要素数
  int N;
  cin >> N;//要素数入力
  //出てきた数字と回数のmap
  map<int, int> counter;
  //全ての頻度を降順で並べるqueue
  priority_queue<int> cont;

  //全ての要素についてループ
  for(int i = 0; i < N; i++){
    int tmp;
    cin >> tmp;
    //入力された数字がcounter内部にあるか探す
    //なければcounterに追加してvalue = 0
    if(!counter.count(tmp)){
      counter[tmp] = 0;
    }
    //アクセスしてvalue++
    counter.at(tmp)++;
    //ループ終了
  }
  //counterのすべてのvalueをpriority_queueに代入
  for (auto exa : counter){
    cont.push(exa.second);
  }
  //priority_queueの先頭を取り出す
  int often = cont.top();
  //取り出した値と一致するvalueを持つ値を取り出す
  for (auto exa : counter){
    if(exa.second == often){
      cout << exa.first << " " << exa.second << endl;
    }
  }
}
