struct Object
{
	//サブオブジェクト
	int subobject;
};

int main()
{
	//クラスのオブジェクト
	Object object;

	//サブオブジェクトへのポインタ
	int * pointer = &object.subobject;

	*pointer = 123;
	int read = object.subobject;

	std::cout << read <<std::endl;
}
