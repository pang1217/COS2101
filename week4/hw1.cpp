/*
    hw1 checknum.
    if num == 0 send 0
    if num > 0 send 1
    if num < 0 send -1
*/
#include<iostream>
using namespace std;
int CheckNum(int);
int main(){
    int num, result;
    cout << "Put num = ? "; cin >> num;
    result = CheckNum(num);
    cout << num << " is " << result << endl;
}

int CheckNum(int num){
    if (num == 0){
        return 0;
    }
    if (num > 0){
        return 1;
    }
    if (num < 0){
        return -1;
    }
}