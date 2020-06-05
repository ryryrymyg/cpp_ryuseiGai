#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, mean, sum = 0;//N:要素数, mean:平均, sum:合計
  int i; //カウンタ変数

  cin >> N;
  vector<int> points(N);

  for(i = 0; i < N; i++){
    cin >> points.at(i);
    sum += points.at(i);
  }

  mean = sum / N;

  for(i = 0; i < N; i++){
    if(points.at(i) > mean){
        cout << points.at(i) - mean << endl;
      }
      else
      {
          cout << mean - points.at(i) << endl;
      }
    }
  }
