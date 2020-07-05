struct S {int x = 123;};

int main()
{
	int data = 123;
	int * ptr = &data;
	int read = *ptr; //ptr単体の参照可能

	S object;
	int S::* mem_ptr = &S::x;
	//objectとmem_ptrでの参照
	int read2 = object.*mem_ptr;

	std::cout << read <<"\n"s << read2 << "\n"s;

}
