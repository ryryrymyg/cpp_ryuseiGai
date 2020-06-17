main(){
	std::cout << 1;

	//ラベルskipまで飛ぶ
	goto skip;

	std::cout << 2;

//ラベルskip
skip:
	std::cout << 3;
}
