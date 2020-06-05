#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

void Bubble_Sort(int N, vector<string> &A){
  bool flag = true;

  while(flag){
    flag = false;
    for(int j = N-1; j > 0; j--){
      if(A.at(j).at(1) < A.at(j -1).at(1)){
        swap(A.at(j), A.at(j-1));
        flag = true;
      }
    }
  }
}

void SelectionS(int N, vector<string> &A){
  rep(i, N){
    int minj = i;
    for(int j = i; j < N; j++){
      if(A.at(j).at(1) < A.at(minj).at(1)){
        minj = j;
      }
    }
    if(minj!=i){
      swap(A.at(i), A.at(minj));
    }
  }
}

void stable_check(int N, vector<string> &A, map<int, queue<char>> dup){
  string stability = "Stable";
  rep(i, N){
    int value = A.at(i).at(1);
    char mark = A.at(i).at(0);
    if((dup.at(value).size() > 1) && (dup.at(value).front() != mark)){
      stability = "Not stable";
    }
    dup.at(value).pop();
  }

  cout << stability << endl;
}

int main(){
  int N;
  cin >> N;

  map<int, queue<char>> dup;
  vector<string> A(N);

  rep(i,N){
    cin >> A.at(i);
    int kvalue = A.at(i).at(1);
    char mark = A.at(i).at(0);
    if(!dup.count(kvalue)){
      queue<char> alpha; //ここいちいち初期化できるか不安
      alpha.push(mark);
      dup[kvalue] = alpha;
    }
    else dup.at(kvalue).push(mark);
  }

  vector<string> B = A;
  map<int, queue<char>> dup2 = dup;


  Bubble_Sort(N, A);
  rep(i, N){
    cout << A.at(i);
    if(i!=N-1) cout << " ";
    else cout << endl;
  }

  stable_check(N,A,dup);

  SelectionS(N, B);
  rep(i, N){
    cout << B.at(i);
    if(i!=N-1) cout << " ";
    else cout << endl;
  }

  stable_check(N, B, dup2);
}
