struct Object
{
	int data_member;
	void member_function()
	{
		std::cout << data_member;
	}
};

int main()
{
	//Object::data_memberへのポインタ
	int Object::* int_ptr = &Object::data_member;
	//Object::data_functionメンバーへのポインタ
	void (Object::* func_ptr)() = &Object::member_function;

	//クラスのオブジェクト
	Object object;

	object.*int_ptr = 123;

	//オブジェクトに対するメンバーポインタを介した参照
	//123
	(object.*func_ptr)();

	//other object
	Object another_object;
	another_object.*int_ptr = 456;
	(another_object.*func_ptr)();
}
