#include<iostream>
using namespace std;


int main()
{
	int A[5], minIndex, temp, i, j;
	cout<<"Enter 5 elements for the Array: ";
	for(int i=0; i<5; i++)
	{
		cin>>A[i];
	}
	cout<<"Before Sorting: "<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<A[i]<<"\t";
	}
	cout<<endl<<"------------Starting Simulation------------"<<endl;
	for(i=0; i<5; i++)
	{
		cout<<"i: "<<i<<endl;
		minIndex = i;
		for(j=i+1; j<5; j++)
		{
			if(A[j]<A[minIndex])
			{
				minIndex=j;
			}
		}
		temp=A[i];
		A[i]=A[minIndex];
		A[minIndex] = temp;

		for(int k=0; k<5; k++)
		{
			cout<<A[k]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl<<"------------Ending Simulation------------"<<endl;
	cout<<"After Sorting: "<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<A[i]<<"\t";
	}
	cout<<endl;
}
