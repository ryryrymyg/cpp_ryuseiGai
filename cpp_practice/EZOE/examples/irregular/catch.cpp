int main()
{
	std::vector<int> a = {0};

	try {a.at(1000);}
	catch(std::out_of_range &e)
	{
		//エラー内容を示す文字列
		std::cout << e.what();
	}
}
