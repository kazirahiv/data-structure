#include<iostream>
using namespace std;

int main(){
    int ar[6]={10,20,30,40,50};
    int index = 2, value=60;

    for(int i=4; i>=index; i--){
        ar[i+1] = ar[i];
        }
    ar[index] = value;
    for(int i=0; i<6; i++){
        cout<<ar[i]<<'\t';
        }

    }
