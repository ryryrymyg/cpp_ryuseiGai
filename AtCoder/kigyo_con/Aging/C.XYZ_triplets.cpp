#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
#define rep2(i,n) for(int i = 1; i <= (n); i++)
typedef pair<int, int> P;
typedef long long ll;
typedef unsigned long long ull;

int ptn(int x, int y, int z){
  if((x==y)&&(y==z)) return 1;
  if((x==y)||(y==z)||(z==x)) return 3;
  return 6;
}

int main(){
  int N;
  cin >> N;

  int total;

  rep2(i, N){
    int sum = 0;
    rep2(x,sqrt(i)+1)rep2(y,x)rep2(z,y){
      total = pow(x,2)+pow(y,2)+pow(z,2) + x*y + y*z + z*x;
      //cout << x << " " << y << " " << z << endl;
      if(total == i){
        sum+=ptn(x, y, z);
      }
    }
    cout << sum << endl;
  }

}
