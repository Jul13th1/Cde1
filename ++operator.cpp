#include <iostream>

class HeadAdd
{
public:
    HeadAdd(int value1)
    {
        value = value1;
    }

    HeadAdd operator++()
    {
        ++value;
        // return value;
        return *this;
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
    HeadAdd h(10);
    ++h;
    h.show();

    return 0;
}