// 1/3 + 2/4  + 3/5  + 4/6  +…  n/(n+2) 
#include<iostream>
using namespace std;

void Input(int& n);
float SUM(int n);
void Output(int, float);

int main(){
    int n; 
    float ans;
    Input(n);
    ans = SUM(n);
    Output(n, ans);
}

void Input (int& n){
    cout << "n = ? "; cin >> n;
}

float SUM(int n){
    if(n == 1){
        return 1.0/3; // 0.33333...
    } else {
        return SUM(n-1) + (n / (n+2.0));
    }
}

void Output(int n, float ans){
    cout << "SUM(" << n << ") = " << ans << endl;
}