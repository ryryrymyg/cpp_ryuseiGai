int *f(){
	//寿命は関数
	int variable {};

	return &variable;
}

int main()
{
	int *ptr = f();
	//エラー
	int read = *ptr;
}
