
#include <iostream>

static int s_Level = 12;
static int s_Speed = 2;

int main(){
    s_Speed = s_Level > 5 ? s_Level > 10 ? 15 : 10 : 5;
    std::cout<< s_Speed << std::endl;
    std::cin.get();
}