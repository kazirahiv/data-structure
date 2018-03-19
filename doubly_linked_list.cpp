#include<iostream>
using namespace std;
struct Node *head, *temp, *newNode;
int i=0, value;

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
    };

void printNodes(){
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
        }
    }

void printNodesRev(int quantity){
    temp=head->prev;
    i=0;
    while(i<quantity){
        cout<<temp->data<<" ";
        temp = temp->prev;
        i++;
        }
    }

void createNodes(int quantity){
    while(i<quantity){
        cin>>value;
        newNode = new Node;
        newNode->data=value;
        newNode->next=NULL;
        if(head==NULL){
            head = newNode;
            temp = newNode;
            }
        else{
            temp->next = newNode;
            newNode->prev = temp;
            temp=newNode;
            head->prev=temp;
            }
            i++;
            }
        }

void insertNode(int afterValue){
    newNode = new Node;
    newNode->next = NULL;
    newNode->prev = NULL;
    cin>>value;
    newNode->data=value;
    temp = head;
    while(temp->data!=afterValue){
        temp = temp->next;
        }
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;

    }
int main(){
    createNodes(5);
    printNodes();
    cout<<'\n';
    insertNode(4);
  //insertNode(5);       <Suppose we're giving 1,2,3,4,5 as input and trying to add some value after 5, this doesn't work! Though the upper function works.
    printNodes();
    cout<<'\n';
    printNodesRev(6);
    }
