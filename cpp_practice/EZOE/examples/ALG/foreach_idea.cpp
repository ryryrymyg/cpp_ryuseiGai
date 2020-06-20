auto for_each = [](auto first, auto last, auto f){
	for(auto iter = first; iter != last; iter++){
		f(*iter);
	}
};

int main(){
	std::vector<int> v = {1, 2, 3, 4, 5};

	//引数を出力する関数
	auto print_value = [](auto value){std::cout << value << "\n"s;};

	for_each(std::begin(v), std::end(v), print_value);

	//引数を二倍して出力
	auto print_twice = [](auto value){std::cout << value*2 << "\n"s;};

	for_each(std::begin(v), std::end(v), print_twice);
}
