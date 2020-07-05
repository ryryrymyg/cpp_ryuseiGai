auto find_if = [](auto first, auto last, auto pred){
	for(auto iter = first; first != last; ++iter){
		if(pred(*iter))
			return iter;
	}

	return last;
};

int main(){
	std::vector<int> v = {1, 2, 3, 4, 5};

	//引数が3の場合にtrueを返す関数
	auto is_3 = [](auto x) {return x == 3;};

	//最初に関数がtrueを返す要素へのイテレータを探すfind_if
	auto i = find_if(std::begin(v), std::end(v), is_3);

	//最初に3と等しい要素へのイテレータを返すfind
	auto j = std::find(std::begin(v), std::end(v), 3);

	//イテレータの比較
	bool b = (i==j);

	std::cout << b << std::endl;
}
