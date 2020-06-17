int main()
{
	int i = 1, j = 1;
	
	while(i < 10){
		while(j < 10){
				std::cout << i*j;
				j++;
				if(j != 10){
					if(i*j > 9) std::cout << " "s;
					else std::cout << "  ";
				}
				else{
					std::cout << "\n"s;
				}
		}
	i++;
	j = 1;
	}
}
