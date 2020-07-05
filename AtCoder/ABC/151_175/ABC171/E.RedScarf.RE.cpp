#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int ruijo2(int i){
  int ans = 1;
  for(int j = 0; j < i; j++) ans *= 2;

  return ans;
}//OK


void int_bit(int num, bitset<19> &bit){
  for(int i = 0; num != 0; i++){
    if(num%2){
      bit.set(i);
    }
    num /= 2;
  }
}//OK

int bit_int(bitset<19> &bit){
  int conv = 0;

  for(int i=0; i < 19; i++){
    if(bit.test(i)){
      conv += ruijo2(i);
    }
  }
  return conv;
}//OK

bitset<19> exor(vector<bitset<19>> const &bits, int N){
  bitset<19> ans;
  ans.reset();

  rep(j, 19){
    int count = 0;
    rep(i, (int)bits.size()){
      if((i != N)&&(bits.at(i).test(j))){
        count++;
      }
    }
    if(count%2){
      ans.set(j);
      //cout << ans << endl;
    }
  }
  //cout << endl;
  return ans;
}//OK

int main(){
  int N;
  cin >> N;

  vector<int> Nums(N);
  rep(i, N) cin >> Nums.at(i);

  vector<bitset<19>> bits(N);

  rep(i, N){
      int_bit(Nums.at(i), bits.at(i));
  }//OK

  vector<bitset<19>> ans(N);
  rep(i,N){
    ans.at(i).reset();
  }//OK

  rep(i, N){
    ans.at(i) = exor(bits, i);
  }//NG

  rep(i, N){
    cout << bit_int(ans.at(i));
    if(i != N-1){
      cout << " ";
    }
  }
  cout << endl;
}
