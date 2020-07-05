struct Object{
	std::string name;

	//コンストラクタ
	Object(std::string const & name): name(name)
	{
		std::cout << name << "is constructed.\n"s;
	}

	//デストラクタ
	~Object()
	{
		std::cout << name << "is destructed.\n"s;
	}
};

void f(){
	Object obj("f"s);
	throw 0;
}

void g(){
	Object obj("g"s);
	f();
}

int main(){
	//変数objが構築される
	Object obj("main"s);

	try {
		g();
	}catch(int e)
	{
		std::cout << "caught.\n"s;
	}

	//変数objの破棄
}
