#include<iostream>
using namespace std;


int main(){
    int ar[5]={12, 19, 24, 10, 17};

    for(int i=0; i<5-1; i++){
        for(int j=i+1; j<5; j++){
            if(ar[i]>ar[j]){
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
                }
            }
        }
      for(int i=0; i<5; i++){
       cout<< ar[i] << " ";
        }
}
