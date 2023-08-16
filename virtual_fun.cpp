#include <iostream>
using namespace std;

class book
{
    public:
    virtual  void display()
    {
        cout << "Base class displayed " << endl;
    }
    
    virtual void dummy() =0;

    book()
    {
        cout << "Base class constructor called " << endl;
    }

    ~book()
    {
        cout << "Base class Destructor called " << endl;
    }

};

class my_book :public book
{
    public:
    void dummy()
    {
        cout << "Derived class displayed " << endl;
    }

    my_book()
    {
        cout << "Derived class constructor called " << endl;
    }

    ~my_book()
    {
        cout << "Derived class Destructor called " << endl;
    }

};

int main()
{
    my_book obj;
    my_book *obj2 = new my_book;
    obj2->display();
    obj2->dummy();
    delete obj2;
    
    return 0;
}