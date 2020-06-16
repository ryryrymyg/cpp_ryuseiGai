int main(){
	double height{} ;
	std::cout << "height(m)>";
	std::cin >> height;

	double weight{} ;
	std::cout << "weight(kg)>";
	std::cin >> weight;
	
	double BMI = weight / (height * height);

	std::cout << "BMI="s << BMI << "\n"s;
}
