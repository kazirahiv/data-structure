#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
    };

struct Node *head;

void print(){
    struct Node *temp;
    temp = head;
    while(temp!=NULL){
        printf("%d\n", temp->data);
        temp = temp->next;
        }
    }
int main(){
    head = NULL;
    head = (Node *)malloc(sizeof(Node));
    head->data=10;
    head->next = (Node *)malloc(sizeof(Node));
    head->next->data=20;
    head->next->next = (Node *)malloc(sizeof(Node));
    head->next->next->data=30;
    print();
    }

