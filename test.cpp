#include<iostream>
using namespace std;

struct Node{
    /* data */
    string id;
    string name;
    int score;
    char grade;
};

int FindGrade(int n);
void Input(Node student[], int &n);
void Search(Node student[], int n, string key);
void Sort(Node student[], int n);
void Print(Node student[], int n);

int main(){
    Node s[100];
    int n;
    Input(s,n);
}

int FindGrade(int n){
    if (80 <= n){
        return 'G';
    } else if (50 <= n){
        return 'P';
    } else {
        return 'F';
    }
}

void Input(Node student[], int &n){
    int score;
    cout << "How many student=? "; cin >> n;
    for (int i=0; i<n; i++){
        cout << "id=? "; cin >> student[i].id;
        cout << "name=? "; cin >> student[i].name;
        cout << "score=? "; cin >> score;
        student[i].score = score;
        student[i].grade = FindGrade(score);
    }
}

void Search(Node student[], int n, string key){
    bool flag = false;
    int index;
    for(int i=0; i<n; i++){
        if (student[i].name == key){
            flag = true;
            index = i;
            break;
        }
    }
    
    if (flag == true){
        cout << student[index].id << " " << student[index].name << " " << student[index].score << " " << student[index].grade << endl;
    } else {
        cout << "not found" << endl;
    }
}

void Sort(Node student[], int n){
    Node temp;
    int i=0;
    while(student[i].id > student[i+1].id && i<n-1){
        if (student[i].id > student[i+1].id){
            temp = student[i];
            student[i] = student[i+1];
            student[i+1] = temp;
        }
        i++;
    }
}

void Print(Node student[], int n){
    for (int index=0; index<n; index++){
        cout << student[index].id << " " << student[index].name << " " << student[index].score << " " << student[index].grade << endl;
    }
}

