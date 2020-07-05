main(){
	//0を入力するなよ。絶対するなよ
	std::cout << "Don't type 0. >"s;

	int input {};
	std::cin >> input;

	if(input == 0)
		throw 0;

	//通常の処理
	std::cout << "Boring. \n"s;
}
