template<typename To, typename From>
To bit_cast(From const & ptr)
{
	To to;
	std::memcpy(&to, &ptr, sizeof(To));

	return to;
}

template <typename T>
void print_raw_address(T ptr)
{
	std::cout << bit_cast<std::uintptr_t>(ptr) << "\n"s;
}

struct Object
{
	int x;
	int y;
	int z;
};

int main()
{
	print_raw_address(&Object::x);
	print_raw_address(&Object::y);
	print_raw_address(&Object::z);
}
