/*
จงเขียนโปรแกรมหาค่า Permutation(n, r)และ Combination(n, r) 
per = n! / (n-r)!
com = n! / (n-r)! * r!
*/
#include<iostream>
using namespace std;

void Input(int&, int&);
int Fact(int);
int Permutation(int, int);
int Combination(int, int);
void Output(int, int);

int main(){
    int n, r, per, com;
    cout << "Find Permutation and Combination." << endl;
    Input(n, r);
    per = Permutation(n, r);
    com = Combination(n, r);
    Output(per, com);
}
void Input(int& n, int& r){
    cout << "n = ? "; cin >> n;
    cout << "r = ? "; cin >> r;
}

int Fact(int n){
    int fac = 1;
    if(n == 1 || n == 0){
        return 1;
    }
    for (int i=1; i<=n; i++){
        fac *= i;
    }
    return fac;
}

int Permutation(int n, int r){
    return Fact(n) / Fact(n-r);
}

int Combination(int n, int r){
    return Fact(n) / (Fact(n-r) * Fact(r));
}

void Output(int per, int com){
    cout << "Permutation = " << per << endl;
    cout << "Combination = " << com << endl;
}