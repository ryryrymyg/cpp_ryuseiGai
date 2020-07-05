struct C
{
	int data {};

	void set(int n)
	{
		C * pointer = this;//thisはオブジェクトへのポインタ
		pointer -> data = n;
	}
};

int main(){
	C a, b;

	a.set(1);
	b.set(2);
}
