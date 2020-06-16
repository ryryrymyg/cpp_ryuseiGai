int main(){
	auto plus = [](auto x, auto y){return x+y;};

	std::cout
		<< plus(1, 2) <<"\n"s
		<< plus(1.5, 0.5) << "\n"s
		<< plus("123"s, "456"s);
}
