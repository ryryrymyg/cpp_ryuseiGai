int main()
{
	int data {};

	//int *からvoid *への静的変換
	void * ptr = &data;
	std::cout << ptr << "\n"s;
}
