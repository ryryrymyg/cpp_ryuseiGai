template <typename To, typename From>
To bit_cast(From const &from){
	To to;
	std::memcpy(&to, &from, sizeof(To));

	return to;
}

//生アドレスを出力する。
template <typename T>
void print_raw_address(T ptr){
	std::cout << bit_cast<std::uintptr_t>(ptr) << "\n"s;
}

int main()
{
	std::vector<int> data = {0, 1, 2};
	print_raw_address(&data[0]);
	print_raw_address(&data[1]);
	print_raw_address(&data[2]);
}
