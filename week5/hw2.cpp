/*
ร้านขายส่งผลไม้แห่งหนึ่งมีผลไม้ขาย
3 ชนิดคือ ส้ม  มะม่วง ทุเรียน โดยขายส้มโลละ 
50  บาท มะม่วงโลละ 
55 บาท  ทุเรียนโลละ 130 บาท  ถ้าลูกค้าซื้อสินค้าทั้งหมดเกิน 5000-20000
บาทได้ส่วนลด 5 %   แต่ถ้าซื้อสินค้าเกิน 20000 บาทได้ส่วนลด 10%  จงออกแบบโปรแกรมเพื่อรับข้อมูลผลไม้ทั้งสามชนิด
คำนวณราคาส่วนลด ราคาขายเมื่อหักส่วนลด และยอดรวมทั้งหมด พิมพ์ออกทางจอภาพ
*/
#include<iostream>
using namespace std;

void Input(float&, float&, float&);

float Amount(float, float, float);
float Discount(float);
float Net(float, float);

void Output(float, float, float); // case
void Output_total(float, float, float); // total

int main(){
    int customer = 0;
    float Orange, Mango, Durian;
    float amount, discount, net;
    float T_amount = 0, T_discount = 0, T_net = 0; // T -> Total
    char key;
    bool flag = true;

    do{
        customer++;
        cout << "Customer " << customer << endl;
        Input(Orange, Mango, Durian);
        amount = Amount(Orange, Mango, Durian);
        discount = Discount(amount);
        net = Net(amount, discount);
        Output(amount, discount, net);

        T_amount += amount;
        T_discount += discount;
        T_net += net;
        
        cout << "RUN AGAIN? Y/N "; cin >> key;
        if (key == 'Y' || key == 'y'){
            flag = true;
        } else {
            flag = false;
        }
    }while(flag);

    Output_total(T_amount, T_discount, T_net);
}

void Input(float& o, float& m, float& d){
    cout << "Orange = ? "; cin >> o;
    cout << "Mango = ? "; cin >> m;
    cout << "Durian = ? "; cin >> d;
}
float Amount(float o, float m, float d){
    float a=0.0; // amount
    a += (o * 50.0); // orange
    a += (m * 55.0); // mango
    a += (d * 130.0); // durian
    return a;
}
float Discount(float a){
    float d = 0.0; // discount
    if(5000 <= a && a <= 20000){
        d = a * 5 / 100.0;
    } else if (20000 < a){
        d = a * 10 / 100.0;
    }
    return d;
}
float Net(float a, float d){
    return a - d;
}
void Output(float a, float d, float n){
    cout << "Amount : " << a << endl;
    cout << "Discount : " << d << endl;
    cout << "Net : " << n << endl;
}
void Output_total(float a, float d, float n){
    cout << "Total Amount : " << a << endl;
    cout << "Total Discount : " << d << endl;
    cout << "Total Net : " << n << endl;
}