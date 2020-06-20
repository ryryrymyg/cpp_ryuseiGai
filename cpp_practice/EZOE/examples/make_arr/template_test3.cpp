template <typename T, T N>
T value()
{
	return N;
}

int main(){
	value<int, 1>();
	value<short, 1>();
}	
