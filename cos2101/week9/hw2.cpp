// add inorder

#include<iostream>
#include<string>
using namespace std;

struct node {
    node *llink; // left
    string id;
    string name;
    int score;
    node *rlink; // right
};

// function
void insert(node *&, string, string, int);
void preorder(node*);
void inorder(node*);

// main
int main(){
    node *root;
    root = NULL;
    string id, name;
    int score;

    cout << "id=? "; cin >> id;
    while(id != "###"){
        cout << "name=? "; cin >> name;
        cout << "score=? "; cin >> score;
        insert(root, id, name, score);
        cout << "id=? "; cin >> id;
    }

    // cout << "Preorder : " << endl;
    // preorder(root);

    cout << "Inorder" << endl;
    inorder(root);
    return 0; 
}

// insert
void insert(node *&root, string id, string name, int score){
    if(root == NULL){
        root = new node;
        root->llink = NULL;
        root->id = id;
        root->name = name;
        root->score = score;
        root->rlink = NULL;
    } else if(id < root->id){
        insert(root->llink, id, name, score);
    } else {
        insert(root->rlink, id, name, score);
    }
}

// preorder
void preorder(node *root){
    if (root != NULL){
        cout << root->id << " " << root->name << " " << root->score << endl;
        preorder(root->llink);
        preorder(root->rlink);
    }
}

void inorder(node *root){
    if(root != NULL){
        inorder(root->llink);
        cout << root->id << " " << root->name << " " << root->score << endl;
        inorder(root->rlink);
    }
}