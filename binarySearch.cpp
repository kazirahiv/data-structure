#include<iostream>
using namespace std;

int main(){
int ar[5];
int value=0, last=0, first=0;

for(int i=0; i<5; i++){
    cin>>ar[i];
    }
    cin>>value;
    first = 0; last = 5-1;
    while(first<=last){
        int mid = (first+last)/2;
        if(ar[mid] == value ){
        cout<<"Found at "<<mid;
        break;
    }

    if(ar[mid]< value){
        first = mid+1;
        }
    else {
        last = mid - 1;
        }
}

if(first>last){ cout<<"not found";}
}
