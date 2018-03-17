#include<iostream>
using namespace std;

int main()
{
	int A[5], temp, pass, i;
	cout<<"Enter 5 integers for the Array: ";
	for(int i=0; i<5; i++)
	{
		cin>>A[i];
	}

	cout<<"The Array Before Sorting is: "<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<A[i]<<"\t";
	}

	cout<<endl<<"------------------Sorting Starts-----------------"<<endl;
	for(int pass=1; pass<5; pass++)
	{
		cout<<"Pass: "<<pass<<endl;
		for(int i=0; i<5-pass; i++)
		{
			if(A[i]>A[i+1])
			{
				cout<<"i: "<<i<<endl;
				temp = A[i];
				A[i] = A[i+1];
				A[i+1] = temp;
				for(int i=0; i<5; i++)
				{   int usleep(750);

					cout<<A[i]<<"\t";
				}
				cout<<endl;
			}
		}
	}
	cout<<endl<<"------------------Sorting Ends-----------------"<<endl;
	cout<<"The Array After Sorting is: "<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<A[i]<<"\t";
	}
	cout<<endl;
}
