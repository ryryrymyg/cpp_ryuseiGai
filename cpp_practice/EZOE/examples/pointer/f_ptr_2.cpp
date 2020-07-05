int f(int x){
	std::cout << x;
	return x;
}

int main(){
	using f_type = int(int);
	using f_pointer = f_type * ;

	f_pointer ptr = &f;

	//関数へのポインターを経由した関数呼び出し
	ptr(123);
}
