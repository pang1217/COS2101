#include<iostream>
#include<string.h>
using namespace std;

void Input(string&);
string Find(const string);
void Output(string);

int main(){
    string c, ans;
    Input(c);
    ans = Find(c);
    Output(ans);
}

void Input(string& c){
    cout << "Please put some sentence. (IN UPPER CASE)" << endl;
    getline(cin, c, '\n');
}

string Find(const string c){
    string ans; // for return
    for(int i = 0 ; i < c.length() ; i++){
        switch(c.at(i)) {
            case 'A' : case 'B' : case 'C' :
                ans += '2';
                break;
            case 'D' : case 'E' : case 'F' :
                ans += '3';
                break;
            case 'G' : case 'H' : case 'I' :
                ans += '4';
                break;
            case 'J' : case 'K' : case 'L' :
                ans += '5';
                break;
            case 'M' : case 'N' : case 'O' :
                ans += '6';
                break;
            case 'P' : case 'Q' : case 'R' : case 'S' :
                ans += '7';
                break;
            case 'T' : case 'U' : case 'V' :
                ans += '8';
                break;
            case 'W' : case 'X' : case 'Y' : case 'Z' :
                ans += '9';
                break;
            case ' ' :
                ans += ' ';
                break;
        }
    }
    return ans;
}

void Output(string ans){
    cout << "Answer is " << ans <<endl;
}