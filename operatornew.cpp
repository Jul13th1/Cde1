#include <iostream>
#include <cstdlib> 

class New
{
public:
    New()
    {
        std::cout << " 1" << std::endl;
    }

    void* operator new(size_t size)
    {
        std::cout << "Custom new for MyClass, size: " << size << std::endl;
        return std::malloc(size); // 使用 std::malloc 分配内存
    }
     // 自定义 delete 操作符
    void operator delete(void* pointer) 
    {
        std::cout << "Custom delete for MyClass" << std::endl;
        std::free(pointer); // 使用 std::free 释放内存
    }
};

int main()
{
    New *n = new New();
    delete(n);

    return 0;
}