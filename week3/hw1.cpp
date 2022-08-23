#include<iostream>
using namespace std;

void Input(int&, int&, int&, int&); // done
void Swap(int&, int&, int&, int&); // done
void Output(int, int, int, int); //done

int main(){
    int a, b, c, d;
    Input(a, b, c, d);
    Swap(a, b, c, d);
    Output(a, b, c, d);
    return 0;
}

void Input(int& a, int& b, int& c, int& d){
    cout << "Please put 4 integer number (min to max) : "; cin >> a >> b >> c >> d;
}

void Swap(int &a, int& b, int& c, int& d){
    int temp;
    temp = a;
    a = d ;
    d = temp;
    temp = b;
    b = c;
    c = temp;
    /* Correct Way
    int t;
    t = x;
    x = y;
    y = t;
    */
}

void Output(int a, int b, int c, int d){
    cout << "Sorting is " << a << " " << b  << " " << c << " " << d << endl;
}