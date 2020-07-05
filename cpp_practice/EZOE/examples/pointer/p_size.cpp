template<typename T>
void print_size()
{
	std::cout << sizeof(T) <<"\n"s;

}

int main(){
	print_size<int *>();
	print_size<double *>();

	//ポインタへのポインタ
	print_size<int **>();
}
