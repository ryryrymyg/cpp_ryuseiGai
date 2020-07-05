template <typename To, typename From>
To bit_cast(From const &from)
{
	To to;
	std::memcpy(&to, &from, sizeof(To));

	return to;
}

struct Object
{
	int x = 123;
	int y = 456;
	int z = 789;
};

int main(){
	Object object;

	//クラスのオブジェクトの先頭アドレス
	std::byte * start = bit_cast<std::byte *>(&object);
	//オフセット0
	int *x = bit_cast<int *>(start + 0);
	//オフセット4
	int *y = bit_cast<int *>(start + 4);
	//オフセット8
	int *z = bit_cast<int *>(start + 8);

	std::cout << *x << *y << *z << "\n"s;
}
