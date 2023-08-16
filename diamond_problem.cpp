#include <iostream>
using namespace std;

//Diamond problem occurs in inheritance when it follows the following hierarchy
//To solve the problem we use Virtualization 

class A
{
    public:
    A()
    {
        cout << "Constructor of class A called " << endl;
    }
    ~A()
    {
        cout << "Destructor of class A called " << endl;
    }

    void display()
    {
        cout << "Hello A " << endl;
    }

};

class B :virtual public A
{
    public:
    B()
    {
        cout << "Constructor of class B called " << endl;
    }
    ~B()
    {
        cout << "Destructor of class B called " << endl;
    }

    void display()
    {
        cout << "Hello B " << endl;
    }
    
};

class C :virtual public A
{
    public:
    C()
    {
        cout << "Constructor of class C called " << endl;
    }
    ~C()
    {
        cout << "Destructor of class C called " << endl;
    }

    void display()
    {
        cout << "Hello C " << endl;
    }
    
};

class D:public B,public C
{
    public:
    D()
    {
        cout << "Constructor of class D called " << endl;
    }
    ~D()
    {
        cout << "Destructor of class D called " << endl;
    }

    void display()
    {
        cout << "Hello D " << endl;
    }
    
};

int main()
{ 
    D obj;
    obj.A :: display();

    return 0;
}