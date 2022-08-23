#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

//function
int value(char s);
int RomanToDecimal(string );

// main
int main(){
    string roman;
    int value;
    ifstream data;
    data.open("InData.txt");

    if(data.fail()){
        cout << "ERROR :: Can't open this file" << endl;
        return -1;
    }

    cout << "ROMAN" << setw(10) << "ARABIC" << endl;
    cout << "----------------" << endl;
    data >> roman ;
    while(!data.eof()){
        //cout << roman << endl ;
        cout << roman << setw(10) << RomanToDecimal(roman) << endl;;
        data >> roman ; 
    }

    data.close();
}

// value
int value(char r){
    switch(r){
        case 'I' : return 1; break;
        case 'V' : return 5; break;
        case 'X' : return 10; break;
        case 'L' : return 50; break;
        case 'C' : return 100; break;
        case 'D' : return 500; break;
        case 'M' : return 1000; break;
        default : return 0;
    }
}

// RomanToDecimal
int RomanToDecimal(string roman){
    char s1, s2;
    int ans = 0;
    for (int i=0; i<roman.length(); i++){
        s1 = roman[i];
        s2 = roman[i+1];
        if (value(s2) <= value(s1)){
            ans += value(s1);
        } else {
            ans += value(s2) - value(s1);
            i++;
        }
    }
    return ans;
}