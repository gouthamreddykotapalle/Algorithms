#include<iostream>
using namespace std;

class A
{
	public :
	int* myarray;
	A()
	{
		cout<<"C";
		myarray= new int[10];
		myarray[0]=100;		
		
	}
	~A()
	{
		cout<<"D";
		delete[] myarray;
	}
	A(const A& obj)//called instead of normal constructor
	{
		cout<<"Co";
		myarray = new int[10];
		//memcpy(myarray, obj.myarray, sizeof(int) * 10);
	}
    
	
};

int main()
{
	A a;
	A b=a;
	cout<<b.myarray[0];
	
	
	
	
	
	
}



