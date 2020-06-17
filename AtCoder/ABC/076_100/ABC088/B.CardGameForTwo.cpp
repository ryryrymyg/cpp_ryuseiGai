#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

int main(){
  int N;
  cin >> N;

  vector<int> card(N);
  rep(i,N){
    cin >> card.at(i);
  }

  sort(card.begin(), card.end());
  reverse(card.begin(), card.end());

  int Alice=0;
  int Bob=0;
  rep(i,N){
    if(!(i%2)){
      Alice += card.at(i);
    }
    else{
      Bob += card.at(i);
    }
  }

  cout << Alice - Bob << endl;
}
