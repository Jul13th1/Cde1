#include <iostream>

//方法1
// class A
// {
// public:
//     int x,y;
//     A(){}
//     A(int x1,int y1)
//     {
//         x = x1;
//         y = y1;
//     }
//     //重载运算符加号
//     ////调用A类构造函数创建一个临时匿名对象作为函数
//     A operator+(A const &a)
//     {
//         return A(x + a.x ,y + a.y);
//     }
//     void show()
//     {
//         std::cout << "x= " << x << " " << "y= " << y << std::endl;
//     }
// };

// int main()
// {
//     A c1(2,3);
//     A c2(4,5);
//     A c3(1,5);
//     A a;
//     a = c1 + c2 + c3;
//     a.show();

//     return 0;
// }


//方法2
class A
{
public:
    int x,y;
    A(){}
    A(int x1,int y1)
    {
        x = x1;
        y = y1;
    }
    //重载运算符加号
    ////调用A类构造函数创建一个临时匿名对象作为函数
    A operator+(A const &a)
    {
        A t;
        t.x = x + a.x;
        t.y = y + a.y;

        return t;
    }
    void show()
    {
        std::cout << "x= " << x << " " << "y= " << y << std::endl;
    }
};

int main()
{
    A c1(2,3);
    A c2(4,5);
    A c3(1,5);
    A a;
    a = c1 + c2 + c3;
    a.show();

    return 0;
}
