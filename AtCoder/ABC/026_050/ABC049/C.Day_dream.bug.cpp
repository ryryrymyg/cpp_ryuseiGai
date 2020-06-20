a#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

void d_judge(string* &s, string* &e, string &cons);
void e_judge(string* &s, string* &e, string &cons);
void a_judge(string* &s, string* &e, string &cons);
void r_judge(string* &s, string* &e, string &cons);

void judge(string* &s, string* &e, string &cons){
  while((s != e)&&(cons=="YES")){
    if((int) *s == (int)'d'){
      d_judge(s, e, cons);
    }
    else if('e'==*s){
      e_judge(s, e, cons);
    }
    else if('a'==*s){
      a_judge(s, e, cons);
    }
    else if('r'==*s){
      r_judge(s, e, cons);
    }
  }

}

void d_judge(string* &s, string* &e, string &cons){
  string dm = "dream";
  string* ds = dm.begin();
  string* de = dm.end();

  for(;ds != dm.end(); s++){
    if(*ds != *s){
      cons = "NO";
      break;
    }
    ds++;
    s++;
  }
}

void e_judge(string* &s, string* &e, string &cons){
  string dm = "erase";
  auto ds = dm.begin();
  string* de = dm.end();

  for(;ds != dm.end(); s++){
    if(*ds != *s){
      if((*ds != 'e')&&(*ds != 'd'){
          cons = "NO";
          break;
        }
      }
    }
    ds++;
    s++;
  }
}

void a_judge(string* &s, string* &e, string &cons){
  string dm = "ase";
  string* ds = dm.begin();
  string* de = dm.end();

  for(;ds != dm.end(); s++){
    if(*ds != *s){
      cons = "NO";
      break;
    }
    ds++;
    s++;
  }
}

void r_judge(string* &s, string* &e, string &cons){

  if(*s != 'r'){
    cons = "NO";
    break;
  }
}

int main(){
  string S;
  cin >> S;
  //string dm = "dream", dr = "dreamer", es = "erase", er = "eraser";

  string* s = S.begin();
  auto e = S.end();
  string cons = "YES";

  judge(s, e, cons);

  cout << cons << endl;
}
