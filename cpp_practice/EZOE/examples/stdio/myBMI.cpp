int main(){
	double height = 1.73;
	double weight = 66.5;

	double BMI = weight / (height * height);

	std::cout << "BMI="s << BMI << "\n"s;

	//function of check BMI
	
	auto status = [](double BMI){
		if(BMI<18.5)
			return "Underweight\n"s;
		else if(BMI <25.0)
			return "Normal\n"s;
		else if(BMI < 30.0)
			return "Overweight\n"s;
		else
			return "Obuse\n"s;
	};
	
	//output status
	std::cout << status(BMI);
}
