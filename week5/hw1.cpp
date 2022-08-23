/*
input -> height, base
*/
#include<iostream>
using namespace std;

void Input(float&, float&);
void Output_FindArea(float, float);

int main(){
    float Height, Base, Area;
    Input(Height, Base);
    Output_FindArea(Height, Base);
}

void Input(float& h, float& b){
    cout << "Put Height : "; cin >> h;
    cout << "Put Base : "; cin >> b;
}

void Output_FindArea(float h, float b){
    float area;
    float flag  = (0.5 * h * b) * 3.0; // 3
    do{ 
        area = 0.5 * h * b;
        cout << "Height = " << h << " Base = " << b << " Area = " << area << endl;
        h += 0.5;
        b += 1.0;
    }while(area < flag);

}