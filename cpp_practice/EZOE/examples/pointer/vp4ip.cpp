int main()
{
	int data = 3;

	void * ptr = &data;

	int *int_ptr = static_cast<int *>(ptr);
	
	std::cout << *int_ptr << "\n"s;
	std::cout << ptr <<"\n"s;
	std::cout << data << "\n"s;

}
