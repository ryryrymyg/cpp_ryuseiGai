auto print_all = [](auto first, auto last){
	//ループ
	for (auto iter = first; iter != last; iter++){
		//出力
		std::cout << *iter << "\n"s;
	}
};

int main(){
	std::vector<int> v = {1, 2, 3, 4, 5};

	print_all(v.begin(), v.end());
}
