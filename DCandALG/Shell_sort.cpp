#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

void insertion_sort(vector<int> &A, int n, int g, int &cnt){
  int j = 0;

  //先頭からgずつ挿入ソート
  for(int i = g; i < n; i++){
    int v = A.at(i);
    j = i - g;

    while((j >= 0)&&(A[j]>v)){
      A.at(j+g) = A.at(j);
      j = j - g;
      ++cnt;
    }
    A.at(j+g) = v;
  }
}

void shell_sort(vector<int> &A, int n){
  int cnt = 0;
  int m=0, al = 0;
  vector<int> G(0);
  while(al < n){
    al++;
    G.emplace_back(al);
    al *= 3;
    m++;
  }

  reverse(G.begin(), G.end());
  rep(i, m){
    insertion_sort(A, n, G.at(i), cnt);
  }
  //ここから本来いらない
  cout << m << endl;
  rep(i,m){
    cout << G.at(i);
    if(i != m-1){
      cout << " ";
    }
  }
  cout << endl;

  cout << cnt << endl;
}

int main(){
  int n;
  cin >> n;

  vector<int> A(n);

  rep(i,n){
    cin >> A.at(i);
  }

  shell_sort(A, n);

  rep(i, n){
    cout << A.at(i) << endl;
  }

}
