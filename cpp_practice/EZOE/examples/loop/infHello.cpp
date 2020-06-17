void hello()
{
	std::cout << "hello\n"s;
}

int main(){
loop:
	hello();
	goto loop;
}
