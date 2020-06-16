#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  int i = 1; //カウント変数
  int result = 1;//結果

  cin >> S;

  for(i = 1; i < S.size(); i+=2){
    if(S.at(i) == '+')
      result++;
    else if(S.at(i) == '-')
      result--;
    else{
      cout << "error" << endl;
      break;
    }
  }

  cout << result << endl;
}
