#include <bits/stdc++.h>
using namespace std;

// 以下に、24時間表記の時計構造体 Clock を定義する

// Clock構造体のメンバ変数を書く
struct Clock {
//   int hour    時間を表す (0~23の値をとる)
  int hour;
//   int minute  分を表す   (0~59の値をとる)
  int minute;
//   int second  秒を表す   (0~59の値をとる)
  int second;

// メンバ関数 set の定義を書く
//   関数名: set
//   引数: int h, int m, int s (それぞれ時、分、秒を表す)
//   返り値: なし
//   関数の説明:
//     時・分・秒を表す3つの引数を受け取り、
//     それぞれ、メンバ変数 hour, minute, second に代入する
  void set(int h, int m, int s){
    hour = h;
    minute = m;
    second = s;
  }

  void add_s(int sec){
    second += sec;
    if (second >= 60){
      minute++;
      second -= 60;
    }

    if (second < 0){
      second += 60;
      minute--;
    }
  }

  void add_m(int min){
    minute += min;
    if (minute >= 60){
      hour++;
      minute -= 60;
    }

    if (minute < 0){
      hour--;
      minute += 60;
    }
  }

  void add_h(int hr){
    hour += hr;
    if (hour >= 24) hour-=24;
    if (hour < 0)   hour+=24;
  }
// メンバ関数 to_str の定義を書く
//   関数名: to_str
//   引数: なし
//   返り値: string型
//   関数の仕様:
//     メンバ変数が表す時刻の文字列を返す
//     時刻の文字列は次のフォーマット
//     "HH:MM:SS"
//     HH、MM、SSはそれぞれ時間、分、秒を2桁で表した文字列
string to_str() {

  string HH, MM, SS;

  if(hour < 10){
    HH = "0" + to_string(hour);
  }
  else{
    HH = to_string(hour);
  }

  if(minute < 10){
    MM = "0" + to_string(minute);
  }
  else{
    MM = to_string(minute);
  }

  if(second < 10){
    SS = "0" + to_string(second);
  }
  else{
    SS = to_string(second);
  }

  return HH+":"+MM+":"+SS;
}

// メンバ関数 shift の定義を書く
//   関数名: shift
//   引数: int diff_second
//   返り値: なし
//   関数の仕様:
//     diff_second 秒だけメンバ変数が表す時刻を変更する(ただし、日付やうるう秒は考えない)
//     diff_second の値が負の場合、時刻を戻す
//     diff_second の値が正の場合、時刻を進める
//     diff_second の値は -86400 ~ 86400 の範囲を取とりうる
  void shift(int diff_second){
    int H = 0, M=0, S=0;

    H = diff_second/3600;
    diff_second = diff_second % 3600;

    M = diff_second/60;
    diff_second = diff_second % 60;

    S = diff_second;

    add_s(S); add_m(M); add_h(H);
  }
};

// -------------------
// ここから先は変更しない
// -------------------

int main() {
  // 入力を受け取る
  int hour, minute, second;
  cin >> hour >> minute >> second;
  int diff_second;
  cin >> diff_second;

  // Clock構造体のオブジェクトを宣言
  Clock clock;

  // set関数を呼び出して時刻を設定する
  clock.set(hour, minute, second);

  // 時刻を出力
  cout << clock.to_str() << endl;

  // 時計を進める(戻す)
  clock.shift(diff_second);

  // 変更後の時刻を出力
  cout << clock.to_str() << endl;
}
