#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

map <char, int> ints;
map <char, vector<int>> vecs;

//コードラインの「命令」「それ以降」のデータを持っている
struct Line {
  string order;
  vector<char> ope_val();

  //変数をすべて数値に変換
  void change_int(line &lin){
    for(int i = 2; i < (int)lin.ope_val.size(); i+=2){
      if(('a' <= lin.ope_val.at(i))&&(lin.ope_val.at(i) <= 'z')){
        char var = lin.ope_val.at(i);
        lin.ope_val.at(i) = to_char(ints.at(var));
      }
    }
  }

  void change_vecs(line &lin){
    vector<char> ops = &lin.ope_val;
    for(int i = 2; i < (int)ops.size(); i+=2){
      if(('a' <= ops.at(i))&&(ops.at(i) <= 'z')){
        char var = ops.at(i);
        ops.at(i) = (cints.at(var));
      }
    }
  }

  void cint(line &lin){
    change_int(lin);
    ints[lin.ope_val.at(0)] = cal_ints(lin);
  }

  void orders(line &lin){
    if(lin.order == "int"){
      cint(lin);
    }
    else if(lin.order == "print_int"){
      p_int(lin);
    }
    else if(line.order == "vec"){
      cvec(lin);
    }
    else{
      p_vec(lin);
    }
  }

};


//すべての行の命令について一つずつ処理する。
//一行ずつ構造体に格納、処理
//宣言された型名をどう処理するか。(ユニコードにしてmapに保存。key:char value:int)
//整数用valuesと配列用vectorsのmapを用意する。
int main(){
  //行数を受け取る
  int N;
  cin >> N;
  //全行について入力を受け取る(charの配列に一つずつ)flag管理
  vector<Line> lines(N);
  rep(i, N){
    cin >> lines.at(i).order;
    char tmp = '0';

    while(tmp == ';'){
      cin >> tmp;
      lines.at(i).ope_val.emplace_back(tmp);
    }
  }

  for(line l: lines){
  }

  //各行の命令を実行する
}
