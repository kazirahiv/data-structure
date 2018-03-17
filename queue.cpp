#include<iostream>
using namespace std;
int A[5];
int front=0, rear=-1, itemCount=0, item, n=5;


int enqueue(int item){
	if(itemCount!=5){
		if(rear==n-1){
			rear=-1;
			}
		rear++;
		A[rear] = item;
		itemCount++;
		}
	else{
		cout<<"Queue is full"<<endl;
		}
	}

int dequeue(){
	if(itemCount!=0){
		if(front==n){
			front=0;
			}
		item = A[front];
		front++;
		itemCount--;
		}
	else{
		cout<<"Queue is empty"<<endl;
		}
	}


int main(){
	for(int i=0; i<5; i++){
		cin>>item;
		enqueue(item);
		}
	for(int i=0; i<5; i++){
		cout<<A[i]<<'\t';
		}
    for(int i=0; i<5; i++){
		dequeue();
		}
    cout<<'\n';
   dequeue();


	}



