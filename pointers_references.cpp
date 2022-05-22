
#include <iostream>
#include <string>

struct Vector3
{
    float x, y, z;
};

int main()
{
    int offset = (int)&((Vector3*)nullptr)->x;// x=0, y=4, z=8
    std::cout << offset << std::endl;


    std::cin.get();
}