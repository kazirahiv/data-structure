#include<iostream>
using namespace std;

int main()
{
	int A[6], i, j, minValue;
	cout<<"Insert 6 elements: "<<endl;
	for(int k=0; k<6; k++)
	{
		cin>>A[k];
	}
	cout<<"Before Sorting: "<<endl;
	for(int k=0; k<6; k++)
	{
		cout<<A[k]<<"\t";
	}
	cout<<endl<<"-----------Starting Simulation----"<<endl;
	for(i=1; i<6; i++)
	{
		cout<<"i: "<<i<<endl;
		minValue=A[i];
		j=i-1;

		while(j>=0 && A[j]>minValue)
		{
			A[j+1]=A[j];
			j=j-1;

		}
		A[j+1]=minValue;
		for(int k=0; k<6; k++)
		{
			cout<<A[k]<<"\t";

		}
		cout<<endl;
	}
	cout<<"------Simulation Ends-----"<<endl;
	for(int k=0; k<6; k++)
	{
		cout<<A[k]<<"\t";
	}
	cout<<endl;
}
