
#include <iostream>
#include <string>

class Entity{
public:
    Entity(){
        std::cout << "Create entity!" << std::endl;
    }

    ~Entity(){
        std::cout << "Delete entity!" << std::endl;
    }
};

class ScopedPtr{
private:
    Entity* m_Ptr;
public:
    ScopedPtr(Entity* ptr)
        : m_Ptr(ptr)
    {
    }

    ~ScopedPtr()
    {
        delete m_Ptr;
    }
};

int main(){

    {
        ScopedPtr e = new Entity();//allocated on a stack
        //Entity* en = new Entity(); - without delete automatically
    }
    std::cin.get();
}