#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.14159
class circle {
private:
  float radius;
  float perimeter;
  float area;

public:
  void askdata() {
    cout << setw(30) << "Enter the radius of the cirlce: ";
    cin >> radius;
    perimeter = 2 * PI * radius;
    area = PI * pow(radius, 2);
  }
  void showdata() {
    cout << "Calculated Operations: " << endl;
    for (int i = 0; i <= 30; i++) {
      cout << "-";
    }
    cout << endl;
    cout << setw(26) << "Radius of the circle: " << radius << endl;
    cout << setw(26) << "Perimeter of the circle: " << perimeter << endl;
    cout << setw(26) << "Area of the circle: " << area << endl << endl;
  }
};
class rectangle {
private:
  float length;
  float breadth;
  float area;
  float perimeter;

public:
  void getdata() {
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;
    area = length * breadth;
    perimeter = 2 * (length + breadth);
  }
  void showdata() {
    cout << "Calculated Operations: " << endl;
    for (int i = 0; i <= 30; i++) {
      cout << "-";
    }
    cout << endl;
    cout << setw(26) << "Length of rectangle: " << length << endl;
    cout << setw(26) << "Breadth of rectangle: " << breadth << endl;
    cout << setw(26) << "Area of rectangle: " << area << endl;
    cout << setw(26) << "Perimeter of rectangle: " << perimeter << endl << endl;
  }
};
class triangle {
private:
  float side1, side2, side3;
  float perimeter;
  float area;

public:
  void getdata() {
    cout << "Enter the three sides of triangle: ";
    cin >> side1 >> side2 >> side3;
  }
  void printdata() {
    float semi;
    perimeter = (side1 + side2 + side3);
    semi = perimeter / 2;
    area = sqrt(semi * (semi - side1) * (semi - side2) * (semi - side3));
    cout<<setw(26)<<"Side1: "<<side1<<endl;
    cout<<setw(26)<<"Side2: "<<side2<<endl;
    cout<<setw(26)<<"Side3: "<<side3<<endl;
    cout<<setw(26)<<"Perimeter of tringle: "<<perimeter<<endl;
    cout<<setw(26)<<"Area of triangle: "<<area<<endl<<endl;
  }
};

int main() {
  circle c1;
  c1.askdata();
  c1.showdata();
  rectangle r1;
  r1.getdata();
  r1.showdata();
  triangle t1;
  t1.getdata();
  t1.printdata();
}
