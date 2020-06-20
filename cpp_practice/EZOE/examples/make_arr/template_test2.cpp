template <std::size_t N>
void f()
{
	int buffer[N];
}

int main()
{
	//配列bufferのサイズは10
	f<10>();
	//サイズは12
	f<12>();
}
