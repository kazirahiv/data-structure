#include<iostream>
using namespace std;
char ar[5];
int top = 0;
int n=5;
char value;
int push(char element){
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
    int ts = (int)'[';
    int tc = (int)']';
    int ss = (int)'{';
    int sc = (int)'}';
    int fs = (int)'(';
    int fc = (int)')';

    string expression = "[({})]";

     for(int i=0; i<5; i++){
        if((int)expression[i] == ts || ss || fs ){
            push(expression[i]);
            }
         else{ pop();}
        }
            }
