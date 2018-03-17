#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *link;
    };

struct Node *head;

void print(){
    struct Node *temp;
    temp = head;
    while(temp != NULL){
        cout<< temp->data <<endl;
        temp = temp->link;
        }
    }

int main(){
    head = NULL;
    head = new Node;
    head->data = 10;
    head->link = new Node;
    head->link->data = 20;
    head->link->link = new Node;
    head->link->link->data=30;
    head->link->link->link=new Node;
    head->link->link->link->data=40;
    print();
    }
