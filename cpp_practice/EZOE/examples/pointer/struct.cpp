struct C
{
	int data { };

	void set(int n){
		data = n;
	}
};

int main()
{
	C a;
	C b;

	a.set(1);
	b.set(2);
}
