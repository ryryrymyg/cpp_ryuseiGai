#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

deque<int> del_val(deque<int> &deq, int val){
  deque<int> new_deq;
  bool flag = true;

  while(!deq.empty()){
    if((deq.front() == val)&&(flag)){
      deq.pop_front();
      flag = false;
      continue;
    }
    new_deq.push_back(deq.front());
    deq.pop_front();
  }

  return new_deq;
}

int main(){
  int N;
  cin >> N;

  deque<int> deq;
  string command;

  int tmp;

  rep(i,N){
    cin >> command;

    if(command == "insert"){
      cin >> tmp;
      deq.push_front(tmp);
    }
    else if(command == "delete"){
      cin >> tmp;
      deq = del_val(deq, tmp);
    }
    else if(command == "deleteFirst"){
      deq.pop_front();
    }
    else if(command == "deleteLast"){
      deq.pop_back();
    }
  }

  while(!deq.empty()){
    cout << deq.front();
    deq.pop_front();
    if(!deq.empty()){
      cout << " ";
    }
    else{
      cout << endl;
    }
  }
}
