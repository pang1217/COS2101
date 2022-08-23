/*
.จงเขียนโปรแกรมโดยใช้คำสั่งวนรอบเพื่อพิมพ์ดังต่อไปนี้
  1
  2   3
  4   5      6
  7   8      9     10
  11  12  13   15   16
*/
#include<iostream>
using namespace std;
int main(){
  int x=1;
  for (int i=0; i<5; i++){
    for (int j=0; j<=i; j++){
      cout << x << " ";
      x++;
    }
    cout << endl;
  }
}