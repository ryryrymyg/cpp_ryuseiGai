#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)

//ノード構造
struct node_t{
  int val;        //値
  node_t *ch[2];  //={左, 右}
  int pri;        //優先度
  int cnt;        //部分木のサイズ
  int sum;        //部分木の値の和

  node_t(int v, double p): val(v), pri(p), cnt(1), sum(v){
    ch[0] = ch[1] = NULL;;
  }
};

int count(node_t *t) {return !t ? 0 : t->cnt;}
int sum(node_t *t) {return !t ? 0 : t->sum;}

node_t *update(node_t *t){
  t->cnt = count(t->ch[0]) + count(t->ch[1]) + 1;
  t->sum = sum(t->ch[0]) + sum(t->ch[1]) + t->val;
  return t; //便利なのでt返しとく
}

node_t *rotate(node_t *t, int b){
  node_t *s = t->ch[1-b];
  t->ch[1-b] = s->ch[b];
  s->ch[b] = t;
  update(t); update(s);
  return s;
}

//途中
