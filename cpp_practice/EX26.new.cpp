#include <bits/stdc++.h>
#include <string>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)


map<char, int> ints;
map<char, vector<int>> vecs;


int ctoi(char c){
  if(('0'<=c)&&(c<='9')){
    return (int)(c-'0');
  }
  return -1;
}

int syn_i(char c){
  int d;

  d = ints.at(c);

  return d;
}


void inp_v(vector<int> &nums){
  char val;
  char sep;
  int num;

  while(sep != ']'){
    cin >> val;

    if(ctoi(val) != -1){
      num = ctoi(val);
    }
    else{
      num =syn_i(val);
    }

    nums.emplace_back(num);
    cin >> sep;
  }
}


vector<int> addv(vector<int> &nums){
  char tmp;
  cin >> tmp;
  vector<int> nums2;

  if(tmp == '[') inp_v(nums2);
  else nums2 = vecs.at(tmp);

  rep(i, (int)nums.size()){
    nums.at(i) = nums.at(i) + nums2.at(i);
  }

  return nums;
}


vector<int> degv(vector<int> &nums){
  char tmp;
  cin >> tmp;
  vector<int> nums2;

  if(tmp == '[') inp_v(nums2);
  else nums2 = vecs.at(tmp);

  rep(i, (int)nums.size()){
    nums.at(i) = nums.at(i) - nums2.at(i);
  }

  return nums;
}


int add(int &num){
  char tmp;
  cin >> tmp;
  int nm = ctoi(tmp);

  if(nm == -1) nm = syn_i(tmp);
  return(num+nm);
}


int deg(int &num){
  char tmp;
  cin >> tmp;
  int nm = ctoi(tmp);

  if(nm == -1) nm = syn_i(tmp);
  return(num-nm);
}


void in_int(){
  char obj;
  cin >> obj;
  char gbg;
  cin >>gbg;

  char tmp, ope;
  int num1;

  cin >> tmp;
  if(('a' <= tmp)&&(tmp <= 'z')){
    num1 = ints.at(tmp);
  }
  else{
    num1 = ctoi(tmp);
  }

  while (ope != ';'){
    cin >> ope;
    if(ope == '+'){
      num1 = add(num1);
    }
    else if(ope == '-'){
      num1 = deg(num1);
    }
  }

  if(!ints.count(obj)){
    ints[obj] = num1;
  }
  else{
    ints.at(obj) = num1;
  }
  //cout <<ints.at(obj)<<endl;   debug
}


void p_int(){
  char tmp;
  int num;
  char ope;

  cin >> tmp;
  num = ctoi(tmp);
  if(num == -1){
    num = syn_i(tmp);
  }

  while(ope != ';'){
    cin >> ope;
    if(ope == '+'){
      num = add(num);
    }
    else if(ope == '-'){
      num = deg(num);
    }
  }

  cout << num << endl;
}


void in_vec(){
  char obj;
  cin >> obj;
  char gbg;
  cin >>gbg;

  char tmp, ope;
  vector<int> nums;

  cin >> tmp;
  if(('a' <= tmp)&&(tmp <= 'z')){
    nums = vecs.at(tmp);
  }
  else if(tmp == '['){
    inp_v(nums);
  }

  while (ope != ';'){
    cin >> ope;
    if(ope == '+'){
      nums = addv(nums);
    }
    else if(ope == '-'){
      nums = degv(nums);
    }
  }

  if(!vecs.count(obj)){
    vecs[obj] = nums;
  }
  else{
    vecs.at(obj) = nums;
  }

    //cout << '[';//なぜかこれがあると動く
    rep(i, (int)nums.size()){
      //cout << " " << nums.at(i);
      if(i+1 == (int)nums.size()){
        //cout << " ]" << endl;
      }
    }

}


void p_vec(){
  char tmp;
  vector<int> nums;
  char ope;

  cin >> tmp;
  if(('a' <= tmp)&&(tmp <= 'z')){
    nums = vecs.at(tmp);
  }
  else if(tmp == '['){
    inp_v(nums);
  }

  while (ope != ';'){
    cin >> ope;
    if(ope == '+'){
      nums = addv(nums);
    }
    else if(ope == '-'){
      nums = degv(nums);
    }
  }

  cout << '[';
  rep(i, (int)nums.size()){
    cout << " " << nums.at(i);
    if(i+1 == (int)nums.size()){
      cout << " ]" << endl;
    }
  }
}

int main(){
  string tmp;

  int N;
  cin >> N;

  rep(i, N){
    cin>>tmp;

    if(tmp == "int") in_int();
    else if(tmp == "print_int") p_int();
    else if(tmp == "vec") in_vec();
    else if(tmp == "print_vec") p_vec();
  }
}
