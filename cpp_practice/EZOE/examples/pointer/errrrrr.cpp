#include <bit>

void * memcpy(void * dest, void const *src, std::size_t n)
{
	//destをstd::byte*型に変換
	auto d = static_cast<std::byte *>(dest);
	//srcをstd::byte const *型に変換する
	auto s = static_cast<std::byte *>(src);
	
	//srcの先頭からnバイトをコピーするのでnバイト先のアドレスを得る
	auto last = s + n;
	
	//destの先頭バイトからのバイト列にコピーし
	while(s != last){
		*d = *s;
		++d;
		++s;
	//destを返す
	return dest;
}

template<typename To, typename From>
To bit_cast (From const & from)
{
	To to;
	std::memcpy(&to, &from, sizeof(To));

	return to;
}

int main(){
	int data {};
	std::cout << bit_cast<std::uintptr_t>(&data);
}
