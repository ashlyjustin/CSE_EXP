#include <iostream>
using namespace std;

//Ashly Justin 16115008
int tos;
void Traverse(int a[])
{
 for(int i=0;i<tos;i++)
	{
		cout<<a[i]<<endl;
	}
}

void push(int a[],int item,int size1)
{
	if(tos==(size1-1)){cout<<"Stack overflow"<<endl;}
	else{tos++;
		a[tos]=item;
		//Traverse(a,&top);
	}
}
void pop(int a[])
{

	if(tos==-1){cout<<"Stack is empty,can't pop\n";}
	else{
		tos--;
		//Traverse(a,&top);

		}
}

int main()
{int size1,choice,stack[10],item;

tos=-1;
	char ch;
cout<<"Enter size of array";
cin>>size1;
do
{
cout<<"\nSelect operation you wish to perform\n1. Push\n2.Pop\n3.Traverse\n";
cin>>choice;
switch(choice)
	{
		case 1: cout<<"Enter element you wish to add into stack\n";
		cin>>item;
		push(stack,item,size1);
		break;
		case 2 : pop(stack);
				break;
		case 3 : Traverse(stack);
				break;
	}
cout<<"Want to perform more press Y/y\n"; cin>>ch;
}while(ch=='Y'||ch=='y');
	return 0;
}
