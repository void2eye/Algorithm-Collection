#include <iostream>
#include <any>
#include <string>

int main()
{
    std::any a = 1; // 赋值为整数
    std::cout << "a (int): " << std::any_cast<int>(a) << std::endl;

    a = std::string("sghda"); // 赋值为字符串
    std::cout << "a (string): " << std::any_cast<std::string>(a) << std::endl;

    return 0;
}