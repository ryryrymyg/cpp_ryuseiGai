int f(int x){ return x;}
using f_ptr = int (*)(int);
//関数のポインターを引数にとり
//関数へのポインターを戻り値として返す
//関数g
f_ptr g(f_ptr p){
	p(0);
	return p;
}

int main()
{
	g(&f);
}
