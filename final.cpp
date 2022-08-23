#include<iostream>
using namespace std;

struct node{
    string roman;
    node *next;
};
void Input(node *&first){
    node *p;
    string roman;
    cout << "Roman=? "; cin >>roman;
    while(roman != "###"){
        p = new node;
        p->roman = roman;
        p->next = NULL;

        if(first == NULL){
            first = p;
        } else {
            node *temp = first;
            while (temp != NULL){
                temp = temp->next;
            }
            temp->next = p;
        }

        cout << "Roman=? "; cin >>roman;
    } 
}

void Output(node *first){
    string roman;
    //char s1, s2;
    int values;
    cout << "Roman  Arabic" << endl;
    cout << ".............." << endl;
    while (first != NULL){
        roman = first->roman;
        for(int i=0; i<roman.length(); i++){
            if (roman[i] == "M"){
                values += 1000;
            } else if(roman[i] == "D"){
                values += 500;
            } else if(roman[i] == "C"){
                values += 100;
            }else if(roman[i] == "L"){
                values += 50;
            }else if(roman[i] == "X"){
                values += 10;
            }else if(roman[i] == "v"){
                values += 5;
            } else if (roman[i] == "I"){
                values += 1;
            }
        }

        cout << roman << "  " << values;

        first = first->next;
    }
    
}


int main(){
    node *first;
    first = NULL;
    Input(first);
    //Output(first);
    return 0;
}