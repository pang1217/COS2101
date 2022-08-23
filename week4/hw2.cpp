#include<iostream>
using namespace std;
void Input(int&, int&, int&, int&, int&);
int FindMin(int, int, int, int, int);
void Output(int);

int main(){
    int n1, n2, n3, n4, n5, mn; // mn = min
    Input(n1, n2, n3, n4, n5);
    mn = FindMin(n1, n2, n3, n4, n5);
    Output(mn);
}

void Input(int& n1, int& n2, int& n3, int& n4, int& n5){
    cout << "Put 5 integer : "; cin >> n1 >> n2 >> n3 >> n4 >> n5;
}
int FindMin(int n1, int n2, int n3, int n4, int n5){
    int mn = n1;
    if (mn > n2){ mn = n2; }
    if (mn > n3){ mn = n3; }
    if (mn > n4){ mn = n4; }
    if (mn > n5){ mn = n5; }
    return mn;
}
void Output(int mn){
    cout << "Min : " << mn << endl;
}