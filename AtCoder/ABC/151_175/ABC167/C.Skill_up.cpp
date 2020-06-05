#include <bits/stdc++.h>

using namespace std;

//まず全アルゴリズムについてexceedを下回るbookがあるか調べる
//あればそのbookのM値を引いたexceedとpriceをmin_priceに渡す。
//無ければ受け取ったpriceを返す。(ベースケース)
//同じ本を外すには？？(セット参照)
int min_price(vector<vector<int>> &books, vector<int> &exceed, int &price){
  for()
  return price; //ベースケース
}

int main(){
  //参考書の数N アルゴリズムの数M 目標理解度X
  int N, M, X;
  cin >> N >> M >> X;

  set<int> used();
  //参考書の値段を0要素目にもつ理解度の配列、をN個集めた配列books
  vector <vector<int>> books(M+1);
  for(vector<int> &book: books){
    for(int &v: book){
      cin >> v;
    }
  }

  //値段フラグprice=0で初期化。最安値min_p
  int price = 0;
  int min_p = 0;

  vector<int> exceed(M+1);

  //すべてのブックのすべてのアルゴリズムについて、全要素の和がXを超えているか調べる
  //超えていなければmin_p = -1を返す
  //超えていれば、超えている値を配列exceedに代入して、
  for(int i = 0; i < M+1; i++){
    int sum_p = 0;
    for(int j = 0; j < N; j++){
      sum_p += books.at(j).at(i);
    }

    if(sum_p < X){
      min_p = -1;
      break;
    }
    if(i == 0){
      price = sum_p;
    }
    exceed(i) = sum_p - X;
  }

  //以下ループ
  //priceにも全額の和を代入。全てのアルゴリズムがexceedを超えていたら一旦リストアップ
  //(深さ優先探索)リストアップした中で最安値のものをexceed＆priceから引く
  //これ以上引けなくなったらpriceをmin_pと比べてmin_p>priceならmin_pに代入
  //以上ループ
  if(min_p != -1){
    min_p = min_price(books, exceed, price)
  }

  //min_p出力
  cout << min_p << endl;
}
