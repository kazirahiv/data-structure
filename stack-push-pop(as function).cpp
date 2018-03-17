#include<iostream>
using namespace std;

int ar[5];
int top = 0;
int n=5;
int value;
int push(int element){
        if(top<n){
            ar[top] = element;
            top = top+1;
            cout<<"push successful"<<endl;
            }
        else{
            cout<<"Stack overflow"<<endl;
            }
    }
int pop(){
    if(top>0){
        top = top-1;
        value = ar[top];
        cout<<"Pop succesful "<<value<< endl;
        }
    else { cout<<" empty"<<endl;}
    }
int main(){
    for(int i=0; i<6; i++){
        value = i*2;
        push(value);
        }
    for(int i=0; i<6; i++){
        pop();
        }
    }
