// convert hours minutes sec to seconds.
#include<iostream>
using namespace std;
int main () {
    int hours, minutes, sec; 
    
    cout << "Covert hours minutes seconds to seconds." << endl;
//    cout << "Enter Your Time (Hours Minute Second eg. 12 2 5) : ";
//    cin >> hours >> minute >> sec;

    cout << "Hours : "; cin >> hours;
    cout << "Minutes : "; cin >> minutes;
    cout << "Seconds : "; cin >> sec;

    sec += ((hours * 60) * 60) + (minutes * 60);

    cout << sec << endl;

    return 0;
}