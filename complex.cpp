#include <iostream>
using namespace std;

class complex
	{public: float real,img;
		
		complex read_no()
		{
			cout<<"Enter real and imaginary parts \n";
			cin>>real;
			cin>>img;
		}
		complex add(complex A)
			{complex C;
				C.real =real + A.real ;
				C.img = img + A.img;
				return C;
			}
		complex sub(complex A)
			{complex C;
				 C.real = real - A.real ;
				 C.img = img -A.img;
				return C;
			}
		complex mul(complex A)
			{complex C;
				C.real = (real*A.real) - (img*A.img) ;
				C.img = (img*A.real) +( A.img*real);
				return C;
			}
		complex div(complex A)
			{complex C;
				 C.real = ((real*A.real) + (img*A.img))/(A.real*A.real + A.img*A.img);
				 C.img = ((img*A.real) -( A.img*real))/(A.real*A.real + A.img*A.img);
				return C;
			}
	};
	
	
int main()
{int choice;
	complex a,b,c;
	do{cout<<"Select operation you want to perform (1-4) \n1.Add 2 complex no.\n2.Sub 2 complex no.\n3.Multiply2 complex no.\n4.Divide 2 complex no.\n5.Exit";
	cin>>choice;
	switch(choice)
	{
		case 1: b.read_no();
				c.read_no();
				a= b.add(c);
				cout<<a.real<<"+ i"<<a.img<<endl;
				break;
		case 2:b.read_no();
				c.read_no();
				a=b.sub(c);
				cout<<a.real<<"+ i"<<a.img<<endl;
				break;
		case 3:b.read_no();
				c.read_no();
				a=b.mul(c);
				cout<<a.real<<"+ i"<<a.img<<endl;
				break;
		case 4: b.read_no();
				c.read_no();
				a=b.div(c);
				cout<<a.real<<"+ i"<<a.img<<endl;
				break;
			}

}while(choice!=5);
return 0;
}