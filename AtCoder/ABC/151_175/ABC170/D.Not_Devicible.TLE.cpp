#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

void insertion_sort(int N, vector<int> &A){
  for (int i = 1; i < N; i++){
    int v = A.at(i);
    int j = i - 1;
    while ((j >= 0) && (A.at(j) > v)){
      A.at(j+1) = A.at(j);
      j--;
    }
    A.at(j+1) = v;
  }
}


int main(){
  int N;
  cin >> N;

  vector<int> Ai;
  int dec = 0;
  int tmp;

  rep(i,N){
    cin >> tmp;
    Ai.emplace_back(tmp);
  }

  insertion_sort(N, Ai);

  vector<bool> xs(N, true);
  set<int> pre;

  rep(i,N){
    if(!xs.at(i)) continue;
    for(int j = i+1; j < N; j++){
      if(Ai.at(j)==Ai.at(i)){
        if(!pre.count(Ai.at(j))){
          dec++;
          pre.insert(Ai.at(i));
        }
      }
      if(Ai.at(j)%Ai.at(i)==0){
        xs.at(j) = false;
      }
    }
  }//N^N*log N

  int total = 0;
  rep(i,N){
    if(xs.at(i)) total++;
  }
  cout << total-dec << endl;
}
