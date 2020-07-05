auto count = [](auto first, auto last, auto value)
{
	auto counter = 0u;
	for (auto i = first; first != last; ++i){
		if(*i == value){
			++counter;
		}
	}
	return counter;
};

int main(){
	std::vector<int> v = {1,2,1,1,3,3};

	//3
	unsigned int a = count(std::begin(v), std::end(v), 1);

	unsigned int b = count(std::begin(v), std::end(v), 2);

	unsigned int c = count(std::begin(v), std::end(v), 3);

	std::cout << a << "\n"s << b << "\n"s << c << "\n"s;
}
