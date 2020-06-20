struct array_int_3{
	int m0, m1, m2;

	int & operator [](std::size_t i){
		switch(i){
			case 0 :
				return m0;
			case 1 :
				return m1;
			case 2 :
				return m2;
			default :
				//間違った引数
				//強制終了
				std::abort();
		}
	}
};
