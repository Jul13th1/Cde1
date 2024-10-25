#include <iostream>

class B
{
public:
    int x,y;
    B(){}
    B(int x1,int y1)
    {
        x = x1;
        y = y1;
    }
    B operator-(B const &b)
    {
        B t;
        t.x = x - b.x;
        t.y = y - b.y;
        return t;
    }
    void show()
    {
        std::cout << x << " " << y << std::endl;
    }

};

int main()
{
    B b1(2,3);
    B b2(1,2);
    B b3;
    b3 = b1 - b2;

    b3.show();

    return 0;
}