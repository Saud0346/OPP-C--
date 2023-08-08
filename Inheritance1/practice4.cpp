#include <iostream>
using namespace std;

//diamond problem

class A
{
    public:
    virtual void display()
    {
        cout << "A is called " << endl;
    }

};

class B: public A
{
    public:
    void display()
    {
        cout << "B is called " << endl;
    }

};

class C: public A
{
    public:
    void display()
    {
        cout << "C is called " << endl;
    }
};

class D: public B,public C
{
    public:
    void display()
    {
        cout << "D is called " << endl;
    }

};



int main()
{
    D obj;
    

    return 0;
}