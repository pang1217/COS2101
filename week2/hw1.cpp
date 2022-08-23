//Find area Traingle, Square, Circle.
#include<iostream>
using namespace std;
float Traingle(float, float); // 0.5 * h * b
float Square(float, float); // or area of Rectangle : w*l 
float Circle(float); // (22.0/7.0) * r * r

int main() {
    float areaTraingle, base, height; // Traingle
    float areaSquare, length, width; // Square or Rectangle
    float areaCircle, radius; // Circle

    // Traingle
    cout << "Find area of Traingle." << endl;
    cout << "Base = ? "; cin >> base;
    cout << "height = ? "; cin >> height;
    areaTraingle = Traingle(base, height);
    cout << "Area of Traingle = " << areaTraingle << endl;

    // Square or Rectangle
    cout << "\nFind area of Square or Rectangle." << endl;
    cout << "Length = ? "; cin >> length;
    cout << "Width = ? "; cin >> width;
    // areaSquare = Square(length);
    cout << "Area of Square or Rectangle = " << Square(length, width)<< endl;

    // Circle
    cout << "\nFind area of Circle with radius." << endl;
    cout << "Radius = ? "; cin >> radius;
    areaCircle = Circle(radius);
    cout << "Area of Circle = " << areaCircle << endl;

    return 0;
}

float Traingle(float b, float h){
    return 0.5 * b * h;
}

float Square(float l, float w){
    return l * w;
}

float Circle(float r){
    return (22.0/7.0) * r * r;
}