/******************************
 すべてが条件を満たすならばtrue
*******************************/
auto is_all_of_odd = [](auto first, auto last){
	return std::all_of(first, last, [](auto value){return value % 2 == 0;});
};

auto is_all_of_le_100 = [](auto first, auto last){
	return std::all_of(first, last, [](auto value){return value <= 100;});
};

int main()
{
	//空のvector
	std::vector<int> v;

	bool b = std::all_of(std::begin(v), std::end(v), 
			[](auto value){return false;});
}
