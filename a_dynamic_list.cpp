#include<iostream>
using namespace std;
const int MAXSIZE=10;
int ar_len = 0;
int index =0;
void print_ar(int ar[]){
    for(int i=0; i<ar_len; i++){
        cout<<ar[i]<<" ";
        }
    cout<<endl;
    }
int _remove(int ar[], int number){
    for(int i=0; i<ar_len; i++){
        if(ar[i]==number){
            ar[i] = 0;
            }
        }
    for(int i=0; i<ar_len; i++){
        if(ar[i]==0){
            index = i;
            }
        }
    for(int i=index; i<ar_len; i++){
        ar[i] = ar[i+1];
        }
    ar_len--;
    print_ar(ar);
    }

int _insert(int ar[], int number){
    if(ar_len<MAXSIZE){
        ar[ar_len++]=number;
        cout<<'\n';
        }
    else{
        cout<<"Buffer Overflow"<<endl;
        }
    }



int main(){
    int A[MAXSIZE];
    char input = 'N';
    int input_number;
    while(input != 'Y'){
        cin>>input_number;
        _insert(A,input_number);
        cout<<"Again?"<<endl;
        cin>>input;
        }
    _remove(A, 5);
}


