/******************************************************
      入力から直接関数を呼ぶ？？？？？？？？？？？？？
******************************************************/

#include <bits/stdc++.h>
#include <sstream>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

map <char, int> ints;
map <char, vector<int>> vecs;

istringstream ss;
ostringstream oss;

struct Calc{
  string order;
  vector<char> ope_val;

  vector<char> ope_f;

  vector<char> v_ch(vector<int> &vec){
    vector<char> vec_c;
    vec_c.emplace_back('[');
    for(int v : vec){
      vec_c.emplace_back((char)v);
    }
    vec_c.emplace_back(']');
    return vec_c;
  }

  void input_o(){
    cin >> order;
    char tmp = 'a';
    while (tmp != ';'){
      cin >> tmp;
      ope_val.emplace_back(tmp);
    }
  }

  void change_int(){
    for (int i = 0; i < (int)ope_val.size(); i++){
      char tmp = ope_val.at(i);
      if (('a' <= tmp)&&(tmp <= 'z')){
        ope_f.emplace_back((char)ints.at(tmp));
      }
      else {
        ope_f.emplace_back(tmp);
      }
    }
  }

  void change_vec(){
    for (int i = 0; i < (int)ope_val.size(); i++){
      char tmp = ope_val.at(i);
      if (('a' <= tmp)&&(tmp <= 'z')){
        for(char v: v_ch(vecs.at(tmp))){
          ope_f.emplace_back(v);
        }
      }
      else {
        ope_f.emplace_back(tmp);
      }
    }
  }
  //intに代入
  void in_int(){
  /*  char init = ope_f.at(0);
    int value;
    for(int i = 1; i < ope_f.size(); i++){
      if()
    }*/
  }

  void p_int(){

  }

  void in_vec(){

  }

  void p_vec(){

  }

  void output_o(){
    if(order == "int"){
      in_int();
    }
    else if(order == "print_int"){
      p_int();
    }
    else if(order == "vec"){
      in_vec();
    }
    else{
      p_vec();
    }
  }


};

int main(){
  int N;
  cin >> N;

  vector<Calc> calcs(N);
  rep(i, N){
    calcs.at(i).input_o();
  }

  rep(i, N){
    calcs.at(i).output_o();
  }
}
