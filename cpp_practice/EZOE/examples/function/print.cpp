int main(){
	//function!!!
	auto print = [](auto x){
		std::cout << x << "\n"s;
	};

	//call_function
	print(123);
	print(3.14);
	print("hello");
}
