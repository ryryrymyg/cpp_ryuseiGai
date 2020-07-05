auto fill_n = [](auto first, auto n, auto value){
	for(auto i = 0; i != n; ++i, ++first)
	{
		*first = value;
	}
};

int main(){
	std::vector<int> v = {1, 2, 3, 4, 5};
	fill_n(std::begin(v), 5, 0);
}
