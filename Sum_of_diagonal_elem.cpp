#include<iostream>
using namespace std;

int main(){
    int ar[4][4]={10,20,30,40,
                  15,25,35,45,
                  20,30,40,10,
                  25,35,45,15};
    int sum = 0;
    for(int i=0; i<4; i++){
       for(int j=0; j<4; j++){
        if(i==j || i+j==3){
            sum = sum + ar[i][j];
            }
        }
        }
    cout<<sum;
    }
