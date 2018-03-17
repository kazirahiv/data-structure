#include<iostream>
using namespace std;
struct Node
{
	int value;
	Node *nextNode;
};
Node *firstNode, *tempNode, *newNode, *prevNode;
int size;
void printLinkedList()
{
	tempNode= firstNode;
	for(int i=0; i<size; i++)
	{
		cout<<tempNode->value<<" ----> ";
		tempNode = tempNode->nextNode;
	}
	cout<<endl;
}

void searchNode(int item)
{
	int flag =0;
	tempNode = firstNode;

	while(tempNode!=NULL)
	{
		if(tempNode->value==item)
		{
			flag =1;
			break;
		}
		else
		{
			tempNode = tempNode->nextNode;
		}
	}
	if(flag == 1)
	{ 
		cout<<"Found"<<endl;
	}
	else
	{
		cout<<"Not Found"<<endl;
	}
}
void insertNode(int prevValue, int item)
{
	newNode = new (Node);
	newNode->value = item;
	newNode->nextNode = NULL;

	tempNode = firstNode;

	while(tempNode->value != prevValue)
	{
		tempNode = tempNode->nextNode;
	}
	newNode->nextNode = tempNode->nextNode;
	tempNode->nextNode=newNode;
}
void deleteNode(int nodevalue)
{
	int firstNodeDeleteFlag =0;
	tempNode = firstNode;
	prevNode = firstNode;
	while(tempNode->value != nodevalue)
	{
		firstNodeDeleteFlag =1;
		prevNode = tempNode;
		tempNode = prevNode->nextNode;
	}
	prevNode->nextNode = tempNode->nextNode;
	if(firstNodeDeleteFlag==0)
	{
		firstNode = firstNode->nextNode;
	}
	delete(tempNode);
}

int main()
{
	//create a linked list

	int data, choice=0, item, prevValue;
	
	cout<<"Enter number of Nodes: ";
	cin>>size;

	firstNode = NULL;

	for(int i=0; i<size; i++)
	{
		cout<<"Enter the Value of Node no "<<i+1<<" : ";
		cin>>data;
		
		newNode = new (Node);
		newNode->value = data;
		newNode->nextNode = NULL;

		if(firstNode==NULL)
		{
			firstNode=newNode;
			tempNode=newNode;
		}
		else
		{
			tempNode->nextNode =  newNode;
			tempNode = newNode;
		}
	}
	//create done-----------------------
	while(choice !=5)
	{
		cout<<"------------------------------------"<<endl;
		cout<<"Enter 1 to print the Linked List"<<endl;
		cout<<"Enter 2 to search a node from the Linked List"<<endl;
		cout<<"Enter 3 to insert a new node in the Linked List"<<endl;
		cout<<"Enter 4 to delete a node from the Linked List"<<endl;
		cout<<"Enter 5 to exit"<<endl;
		cout<<"------------------------------------"<<endl;
		cout<<"What do you want? : ";
		cin>>choice;
		cout<<"------------------------------------"<<endl;
		switch(choice)
		{
			case 1:
				printLinkedList();
				break;
			case 2:
				cout<<"Enter the value to search: ";
				cin>>item;
				searchNode(item);
				break;
			case 3:
				cout<<"insert the value of new node: ";
				cin>>item;
				cout<<"Insert the value of previous node: ";
				cin>>prevValue;
				insertNode(prevValue, item);
				size++;
				break;
			case 4:
				cout<<"insert the value to delete a node: ";
				cin>>item;
				deleteNode(item);
				size--;
				break;
			case 5:
				cout<<"Good Bye !!!!"<<endl;
				break;
		}
	}
}