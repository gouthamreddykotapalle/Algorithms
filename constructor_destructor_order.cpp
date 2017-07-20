#include<iostream>
using namespace std;


class Base
{
  public:

  Base ( )
  {
    cout << "Inside Base constructor" << endl;
  } 

  
  ~Base ( )
  {
    cout << "Inside Base destructor" << endl;
  } 

};

class Derived : public Base
{

  public:

  Derived  ( )
  {
    cout << "Inside Derived constructor" << endl;
  } 

  ~Derived ( )
  {
    cout << "Inside Derived destructor" << endl;
  } 

};

int main( )
{
	Base b;
	//construcotr is just a method which is called during an object creation and destructor is a method that is called when an object leaves scope
  Derived x;//destructors are also called before the objects memory i de allocated and given back to the processor for use by someone else
}
