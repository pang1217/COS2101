#include<iostream>
using namespace std;
void Input(float&, float&);
float FindWaterUnit(float, float);
float FindPay(float);
void Output(float, float);
int main(){
    float water_l, water_p; // l = last, p = present 
    float waterUnit, Pay;
    Input(water_l, water_p);
    waterUnit = FindWaterUnit(water_l, water_p);
    Pay = FindPay(waterUnit);
    Output(waterUnit, Pay);
}

void Input(float& WL, float& WP){
    cout << "last month : "; cin >> WL;
    cout << "this month : "; cin >> WP;
}
float FindWaterUnit(float wl, float wp){
    return wp - wl;
}
float FindPay(float waterU){
    if (waterU <= 20){ return 0.0; }
    else if(waterU <= 50){ return (waterU - 20) * 20; }
    else if(waterU <= 100){ return ((waterU - 50) * 25) + 600; }
    else { return ((waterU - 100) * 30) + (600 + 1250); }
}
void Output(float waterU, float pay){
    cout << "Water Unit Used : " << waterU << endl;
    cout << "Total pay : " << pay << endl;
}