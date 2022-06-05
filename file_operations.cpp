
#include <iostream>
#include <fstream>

int main()
{
    std::ofstream out("D:\\Work\\hello.txt", std::ios::app);
    if (out.is_open())
    {
        out << "Welcome to CPP" << std::endl;
    }
    out.close();

    std::cout << "End of program" << std::endl;
    std::cin.get();
}