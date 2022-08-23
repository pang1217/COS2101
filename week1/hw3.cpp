// pow 2, 3, 4 of any number
#include<iostream>
using namespace std;
int main() {
    int num; // input
    int num2, num3, num4; //output

    cout << "num^2, num^3, num^4" << endl;
    cout << "Num = ? "; cin >> num;

    num2 = num*num;
    num3 = num2 * num; // num * num * num
    num4 = num2 * num2; // or (num3 * num) or (num * num * num * num)

    cout << num << "^2 = " << num2 << endl;
    cout << num << "^3 = " << num3 << endl;
    cout << num << "^4 = " << num4 << endl;

    return 0;
}