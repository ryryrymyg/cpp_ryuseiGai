int main(){
	const int data = 123;

	//int const *でもよい
	const int * ptr = &data;

	//読み込み
	int read = *ptr;

	std::cout << read << std::endl;
}
