#include <iostream>

class Area{
public:
    virtual double area() = 0;
};

struct Triangle : public Area{
public:
    int m_width = 5;
    int m_height = 4;
public:
    double area() override {
        double area = 0.5 * m_width * m_height;
        return area;
    }
};

struct Rectangle : public Area{
public:
    int m_width = 8;
    int m_height = 2;
public:
    double area() override {
        double area = m_width * m_height;
        return area;
    }
};

struct Circle : public Area {
public:
    int m_radius = 68;
public:
    double area() override {
        double area = 3.14 * pow(m_radius, 2);
        return area;
    }
};

int main(){
    Triangle triangle;
    Area &t_area = triangle;
    std::cout << "Area of triangle is a " << t_area.area() << std::endl;

    Rectangle rectangle;
    Area &r_area = rectangle;
    std::cout << "Area of rectangle is a " << r_area.area() << std::endl;

    Circle circle;
    Area &c_area = circle;
    std::cout << "Area of circle is a " << c_area.area() << std::endl;

    std::cin.get();
}