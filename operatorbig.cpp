#include <iostream>

class A
{
public:
    A(int x1)
    {
        x = x1;
    }
    bool operator>(A const &a)
    {
        return x > a.x;
    }
public:
    int x;
};

int main()
{
    A a1(2);
    A a2(7);
    if(a1 > a2)
    {
        std::cout << "重载大于号" << std::endl;
    }
    else
    {
        std::cout << "big了" << std::endl;
    }

    return 0;
}