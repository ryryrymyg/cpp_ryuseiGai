#include <bits/stdc++.h>
#include <string>
using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

int main(){
  stack<int> nums;
  string s;

  int n1,n2;

  while(cin>>s){
    if(s == "+"){
      n1 = nums.top();
      nums.pop();
      n2 = nums.top();
      nums.pop();
      nums.push(n1 + n2);
    }
    else if(s == "-"){
      n1 = nums.top();
      nums.pop();
      n2 = nums.top();
      nums.pop();
      nums.push(n2-n1);
    }
    else if(s == "*"){
      n1 = nums.top();
      nums.pop();
      n2 = nums.top();
      nums.pop();
      nums.push(n1*n2);
    }
    else{
      nums.push(atoi(s.c_str()));
    }
  }

  cout << nums.top() << endl;
}
