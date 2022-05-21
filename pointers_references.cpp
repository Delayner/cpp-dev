
#include <iostream>

int main(){
int a = 5;
int b = 8;

int *ref = &a;
*ref = 1;
ref = &b; // *ref = b;
*ref = 3;


std::cout << a << " " << b << " " << *ref << std::endl;
    std::cin.get();
}