#include <iostream>

// istream& operator>>(istream&, 类对象引用);         //输入运算符>>重载
// ostream& operator<<(ostream&, const 类对象引用);    //输出运算符<<重载

class A
{
public:
    A(int x1,int y1)
    {
        x = x1;
        y = y1;
    }

    friend std::istream& operator>>(std::istream &is,A &a);
    friend std::ostream& operator<<(std::ostream &os,A &a);
public:
    int x;
    int y;
};

std::istream &operator>>(std::istream &is, A &a)
{
    is >> a.x >> a.y;
    return is;
}

std::ostream &operator<<(std::ostream &os, A &a)
{
    os << "x= " << a.x << " " << "y= " << a.y << std::endl;
    return os;
}

int main()
{
    A a(1,2);
    std::cin >> a;
    std::cout << a;

    return 0;
}
