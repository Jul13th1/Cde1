#include <iostream>

class Same
{
public:
    Same(int x1)
    {
        x = x1;
    }
    friend bool operator==(Same const &s1,Same const &s2);
public:
    int x;
    int y;
};

bool operator==(Same const &s1, Same const &s2)
{
    return s1.x == s2.x;
}

int main()
{
    Same s1(19);
    Same s2(100);
    if(s1 == s2)
    {
        std::cout << "两个值相等" << std::endl;
    }
    else
    {
        std::cout << "两个值不相同" << std::endl;
    }

    return 0;
}
