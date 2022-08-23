#include<iostream>
using namespace std;

void Input(float&, int&); // Done
void FindReward(float, float&, int); //Done
void FindPension(float, float&); //Done
void Output(float, float); // Done

int main(){
    int years;
    float Salary_LastMonth, Reward, Pension;
    Input(Salary_LastMonth, years);
    FindReward(Salary_LastMonth, Reward, years);
    FindPension(Reward, Pension);
    Output(Reward, Pension);
    return 0;
}

void Input(float& s, int& y){
    cout << "Salary last month = ? "; cin >> s;
    cout << "Years of service = ? "; cin >> y;
}

void FindReward(float s, float& r, int y){
    r = s*y;
}

void FindPension(float r, float& p){
    p = r/50.0;
}

void  Output(float r, float p){
    cout << "Reward : " << r << endl;
    cout << "Pension : " << p << endl;
}