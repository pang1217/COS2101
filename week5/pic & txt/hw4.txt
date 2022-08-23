/*
จงเขียนโปรแกรมในการหาค่าของพื้นที่ตามเมนูดังนี้
  Menu
 (T)Triangle // 1/2*h*b
 (R)Ractangular // l*w
 (C)Circle // pi r^2
 select T /R /C ? 
*/
#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;
void Triangle();
void Rectangle();
void Circle();
int main(){
  bool flag = true;
  char key;
  do {
    cout << "=====MENU.=====" << endl;
    cout << "(T) Triangle." << endl;
    cout << "(R) Rectangle." << endl;
    cout << "(C) Circle." << endl;
    cout << "Select T / R / C ? "; cin >> key;
    switch(key){
      case 'T' : case 't' : 
        Triangle();
        break;
      case 'R' : case 'r' :
        Rectangle();
        break;
      case 'C' : case 'c':
        Circle();
        break;
      default :
        flag = false;
    }
  }while(flag);

  return 0;
}

void Triangle(){
  float height, base, area;
  cout << "=====Triangle=====" << endl;
  cout << "Height = ? "; cin >> height;
  cout << "Base = ? "; cin >> base;
  area = 0.5 * height * base;
  cout << "Area of Triangle = " << area << endl;
}

void Rectangle(){
  float width, length, area;
  cout << "=====Rectangle=====" << endl;
  cout << "Width = ? "; cin >> width;
  cout << "Length = ? "; cin >> length;
  area = width * length;
  cout << "Areaof Rectangle = " << area << endl;
}

void Circle(){
  float radius, area;
  cout << "=====Circle=====" << endl;
  cout << "Radius = ? "; cin >> radius;
  area = M_PI * pow(radius, 2);
  cout << "Area of Circle = " << area << endl;
}