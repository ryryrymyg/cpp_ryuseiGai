#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (n); i++)

typedef long long ll;
typedef unsigned long long ull;

template<typename Array>
struct array_iterator
{
	Array & a;
	std::size_t i;
	array_iterator(Array &a, size_t i): a(a), i(i) { }

	//次の要素を指す
	array_iterator & operator ++() {
		++i;
		return *this;
	}
	//前の要素を指す
	array_iterator & operator -- () {
		--i;
		return this;
	}

	//今参照している要素へのリファレンスを返す
	typename Array::reference operator *()
	{
		return a[i];
	}
	typename Array::reference operator [](std::size_t n) const
	{
		return *(*this + n);
	}

	array_iterator::operator ++(int)
	{
		array_iterator copy = *this;
		++*this;
		return copy;
	}

	bool array_iterator::operator ==(array_iterator const & right)
	{
		return i == right.i;
	}
	bool array_iterator::operator !=(array_iterator const & right)
	{
		return i != right.i;
	}

	array_iterator &operator +=(std::size_t n)
	{
		i += n;
		return *this;
	}

	array_iterator operator + (std::size_t n) const
	{
		auto copy = *this;
		copy += n;
		return copy;
	}

	bool operator < (array_iterator const & right) const
	{
		return i < right.i;
	}

	bool operator <= (array_iterator const & right) const
	{
		return i <= right.i;
	}

	bool operator > (array_iterator const & right) const
	{
		return i > right.i;
	}

	bool operator >= (array_iterator const & right) const
	{
		return i >= right.i;
	}
};

/************************************************
template<typename Array>
struct array_iterator_begin
{
	Array &a;
	Array_iterator_begin(Array & a)
		:a(a) {}

	typename Array::reference
		array_iterator_begin::operator *()
		{
			return a[0];
		}
};
//***********************************************/

template<typename T, std::size_t N>
struct array
{
	using value_type = T;
	using reference = T&;
	value_type storage[N];

	using const_reference = T const &;

	using size_type = std::size_t;

	using iterator = array_iterator<*this, 0>;

	iterator begin()
	{return iterator(*this, 0)};
	iterator end(){
		return array_iterator(*this, N);

	size_type size();
	value_type storage[N];

	//not const
	reference operator[](std::size_t i)
	{
		return storage[i];
	}

	//const ver.
	const_reference operator[](std::size_t i)const
	{
		return storage[i];
	}

	reference front()
	{return storage[0];}
	const_reference front() const
	{return storage[0];}

	reference back()
	{return storage[N-1];}
	const_reference back() const
	{return storage[N-1];}

	void fill(const_reference u)
	{
		for(size_type i = 0; i != N; ++i)
		{
			storage[i] = u;
		}
	}

	array_iterator & array_iterator::operator ++()
	{
		++i;
		return *this;
	}
};

int main(){
	array<int, 5> a = {1, 2, 3, 4, 5};

	std::cout << a[3];
}
