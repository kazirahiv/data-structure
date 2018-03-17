#include<iostream>
using namespace std;

int main(){
    int array[] = {1, 2, 3, 4, 5, 6};
    for (int i = 2; i < 5; ++i){
        array[i] = array[i + 1];
            }
    for(int i=0; i<5 ; i++){ cout<<array[i]<<endl; }
    }
