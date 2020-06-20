#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define rep(i,n) for(int i = 0; i < N; i++)

int main(){
  int L, N;
  cin >> L >> N;

  vector<int> Ants(N);
  rep(i,n) cin >> Ants.at(i);

  int shortest = 0, longest;

  sort(Ants.begin(), Ants.end());

  longest = (Ants.at(N-1)) > (L - Ants.at(0)) ? (Ants.at(N-1)) : (L - Ants.at(0));

  for(int a : Ants){
    if(a < (L/2)){
      if(shortest < a) shortest = a;
    }
    else{
      if(shortest < (L - a)) shortest = (L-a);
    }
  }

  cout << shortest << " " << longest << endl;
}
