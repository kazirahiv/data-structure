#include<iostream>
using namespace std;

int main(){
    int a[3]={1,2,3};
    int b[3]={4,5,6};
    int c[6];
    for(int i=0, j=0; i<6; i++){
        if(i<3){
            c[i] = a[i];
            }
        else{
            c[i] = b[j];
            j++;
            }
        }
    for(int i=0; i<6; i++){
        cout<<c[i];
        }

    }
