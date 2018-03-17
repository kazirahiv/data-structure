#include<iostream>
using namespace std;


int main(){
    int ar[5]={12, 19, 24, 10, 17};

    int first = ar[0];
    for(int j=0; j<5; j++){
    for(int i=0; i<5; i++){
        if(ar[i]>ar[i+1]){
            int temp = ar[i+1];
            ar[i+1] = ar[i];
            ar[i] = temp;
            }
        }
        }
          for(int i=0; i<5; i++){
       cout<< ar[i] << " ";
        }
}
