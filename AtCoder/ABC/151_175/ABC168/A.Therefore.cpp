#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;

  if((N%10)==3){
    cout << "bon" << endl;
  }
  else if((N%10)!=0){
    if((N%10)!=1){
      if((N%10)!=6){
        if((N%10)!=8){
          cout << "hon" << endl;
        }
        else{
          cout << "pon" << endl;
        }
      }
      else{
        cout << "pon" << endl;
      }
    }
    else{
      cout << "pon" << endl;
    }
  }
  else{
    cout << "pon" << endl;
  }
}
