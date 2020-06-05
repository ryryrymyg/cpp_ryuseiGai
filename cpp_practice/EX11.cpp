#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  int i; //カウント変数

  string op;
  cin >> N >> A;

  for(i = 0; i < N; i++){
    cin >> op >> B;

    if(B == 0){
      if(op == "/"){
      	cout << "error" << endl;
      	break;
      }
    }

    if(op != "+"){
      if(op != "-"){
        if(op != "*"){
          if(op != "/"){
            cout << "error" << endl;
            break;
          }
        }
      }
    }

    cout << i+1 << ":";

    if (op == "+") {
      cout << A + B << endl;
      A += B;
    }
    else if(op == "-"){
      cout << A - B << endl;
      A -= B;
    }
    else if(op == "*"){
      cout << A * B << endl;
      A *= B;
    }
    else if(op == "/"){
      cout << A / B << endl;
      A /= B;
    }
  }
}
