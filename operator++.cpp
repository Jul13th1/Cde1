#include <iostream>

//先返回对象的副本（递增前的状态），然后递增对象值。
class TailAdd
{
public:
	TailAdd(int value1)
	{
		value = value1;
	}

	TailAdd operator++(int)
	{
		TailAdd t = *this;
		++value;
		return t;
	}

	void show()
	{
		std::cout << value << std::endl;
	}

public:
	int value;
};

int main()
{
	TailAdd a(10);
	TailAdd t1 = a++;
	t1.show();
	a.show();

	return 0;
}