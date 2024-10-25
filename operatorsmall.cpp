#include <iostream>

class Small
{
public:
    Small(int x1)
    {
        x = x1;
    }
    //可重载为类的成员函数也可重载为类的友元函数（具有对称性的运算符通常重载为 类的友元函数）
    //使用友元函数重载二元运算符（如 < 和 >）时，函数通常需要两个参数：一个表示当前对象（隐式传递），另一个表示要比较的对象（显式传递）。
    friend bool operator<(Small const &a1,Small const &a2);
public:
    int x;
};

bool operator<(Small const &a1,Small const &a2)
{
    return a1.x < a2.x;
}

int main()
{
    Small s1(3);
    Small s2(9);

    if(s1 < s2)
    {
        std::cout << "重载小于号" << std::endl;
    }

    return 0;
}
