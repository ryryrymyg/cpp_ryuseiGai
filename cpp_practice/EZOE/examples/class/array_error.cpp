template <typename Array>
struct array_iterator
{
	Array &a;
	std::size_t i;

	array_iterator(Array &a)
		: a(a), i(i){}

	//次の要素を返す
	array_iterator &operator ++()
	{
		++i;
		return *this;
	}

	//前の要素を返す
	array_iterator &operator --();

	typename Array::reference array_iterator::operator *()
	{
		return a[i];
	}
	//今参照している要素へのリファレンスを返す
	Array::reference operator *();
};

template<typename T, std::size_t N>
struct array{
	T storage[N];

	//黒魔術1: array
	//イテレータ型
	using iterator = array_iterator<array>;

	//イテレータを返すメンバ関数
	iterator begin()
	//黒魔術2:*this
	//黒魔術3:iterator(*this)
	{return iterator(*this, 0);}	

	//最後の要素へのイテレータ
	iterator end(){
		return iterator(*this, N);
	}

	void fill(T const &u){
		for (std::size_t i = 0; i!= N; ++i){
			storage[i] = u;
		}
	}
};

/*
template<typename Array>
struct array_iterator_begin()
{
	Array &a;
	
	array_iterator_begin(Array &a)
		:a(a){}
	
	typename Array::reference
	array_iterator_begin::operater * ()
	{
		return a[0];
	}
};
*/
template <typename Array>
struct attay_iterator
{
	Array &a;
	std::size_t i;

	array_iterator(Array &a)
		: a(a), i(i){}

	//次の要素を返す
	array_iterator &operator ++()
	{
		++i;
		return *this;
	}

	//前の要素を返す
	array_iterator &operator --();

	//今参照している要素へのリファレンスを返す
	Array::reference operator *();
};

int main(){
	array<int, 5> a = {1,2,3,4,5};

	auto iter = a.begin();

	std::cout << *iter;
	++iter;
	std::cout << *iter;
}
