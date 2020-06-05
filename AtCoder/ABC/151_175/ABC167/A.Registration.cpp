#include <bits/stdc++.h>

using namespace std;

int main(){
  //文字列を受け取る配列s
  string S;
  cin >> S;
  //文字列を受け取る配列t
  string T;
  cin >> T;
  //フラグstring:consider
  string consider = "Yes";
  //全ての文字を頭から確認違えばフラグ立ててbreak
  for (int i = 0; i < (int)S.size(); i++){
    if(S.at(i)!=T.at(i)){
      consider = "No";
      break;
    }
  }
  //consider出力

  cout << consider << endl;
}
