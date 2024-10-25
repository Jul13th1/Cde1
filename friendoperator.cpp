#include <iostream>

class A
{
public:
    A(int x1,int y1)
    {
        x = x1;
        y = y1;
    }

    // friend 返回类型 operator 运算符（参数列表）
    friend A operator+(A const &a1,A const &a2);

    void show()
    {
        std::cout << x << " " << y << std::endl;
    }
public:
    int x;
    int y;
};

A operator+(A const &a1, A const &a2)
{
    return A(a1.x + a2.x,a1.y + a2.y);
}

int main()
{
    A a1(1,3);
    A a2(3,5);
    A a3 = a1 + a2;
    a3.show();

    return 0;
}
