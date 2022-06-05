
#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string line;

    std::ifstream in("D:\\Work\\hello.txt"); // окрываем файл для чтения
    if (in.is_open())
    {
        while (getline(in, line))
        {
            std::cout << line << std::endl;
        }
    }
    in.close();

    std::cout << "End of program" << std::endl;
    std::cin.get();
}