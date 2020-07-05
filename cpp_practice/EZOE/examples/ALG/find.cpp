auto find = [](auto first, auto last, auto const &value)
{
	for(auto iter = first; iter != last; ++iter){
		//値を発見したらそのイテレータを返す
		if(*iter == value)
			return iter;
	}
	//値が見当たらなかったらlastを返す
	return last;
};

int main(){
	std::vector<int> v = {1, 2, 3, 4, 5};

	auto pos = find(std::begin(v), std::end(v), 0);

	if (pos != std::end(v)){
		std::cout << "Found!!"s;
	}
	else{
		std::cout <<"Not found."s;
	}
}
