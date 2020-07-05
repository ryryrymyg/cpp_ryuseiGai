#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;

int main(){
  unsigned long long N;
  cin >> N;

  stack<unsigned long long> Nums;

  while(N >= 26){
    N--;//各桁に対して1-26を0-25に変換
    Nums.push(N%26);
    N /= 26;
  }
  if(N != 0){
    N--;
    Nums.push(N);
  }

  char a;
  while(!Nums.empty()){
    a = 'a' + (char)Nums.top();
    Nums.pop();
    cout << a;
  }

  cout << endl;
}
