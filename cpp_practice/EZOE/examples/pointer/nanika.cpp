struct C{int data {};};

auto ptr(int) -> int C::*
{return &C::data;}

int main()
{
	C object;
	object.*ptr(123);

	std::cout << *object.*ptr << std::endl;
}
