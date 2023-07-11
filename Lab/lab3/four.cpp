#include <iostream>
#include <cmath>

const float PI = 3.14159; // Define the value of pi

// Define the Circle class
class Circle
{
private:
    float radius;

public:
    void setRadius(float r)
    {
        radius = r;
    }
    float getRadius()
    {
        return radius;
    }
    float getArea()
    {
        return PI * radius * radius;
    }
    float getPerimeter()
    {
        return 2 * PI * radius;
    }
    void display()
    {
        std::cout << "Circle: radius = " << radius << "\n";
        std::cout << "Area = " << getArea() << "\n";
        std::cout << "Perimeter = " << getPerimeter() << "\n";
    }
};

// Define the Rectangle class
class Rectangle
{
private:
    float length;
    float width;

public:
    void setLength(float l)
    {
        length = l;
    }
    void setWidth(float w)
    {
        width = w;
    }
    float getLength()
    {
        return length;
    }
    float getWidth()
    {
        return width;
    }
    float getArea()
    {
        return length * width;
    }
    float getPerimeter()
    {
        return 2 * (length + width);
    }
    void display()
    {
        std::cout << "Rectangle: length = " << length << ", width = " << width << "\n";
        std::cout << "Area = " << getArea() << "\n";
        std::cout << "Perimeter = " << getPerimeter() << "\n";
    }
};

// Define the Triangle class
class Triangle
{
private:
    float side1;
    float side2;
    float side3;

public:
    void setSides(float s1, float s2, float s3)
    {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }
    float getSide1()
    {
        return side1;
    }
    float getSide2()
    {
        return side2;
    }
    float getSide3()
    {
        return side3;
    }
    float getArea()
    {
        float s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
    float getPerimeter()
    {
        return side1 + side2 + side3;
    }
    void display()
    {
        std::cout << "Triangle: sides = " << side1 << ", " << side2 << ", " << side3 << "\n";
        std::cout << "Area = " << getArea() << "\n";
        std::cout << "Perimeter = " << getPerimeter() << "\n";
    }
};

int main()
{
    // Create a Circle object and display its properties
    Circle circle;
    circle.setRadius(5.0);
    circle.display();
    std::cout << "\n";

    // Create a Rectangle object and display its properties
    Rectangle rectangle;
    rectangle.setLength(4.0);
    rectangle.setWidth(6.0);
    rectangle.display();
    std::cout << "\n";

    // Create a Triangle object and display its properties
    Triangle triangle;
    triangle.setSides(3.0, 4.0, 5.0);
    triangle.display();
    std::cout << "\n";

    return 0;
}