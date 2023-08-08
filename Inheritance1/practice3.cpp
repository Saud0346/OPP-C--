#include <iostream>
using namespace std;

//Multiple Inheritance

class A
{
    int A_data;
    public:
    void display();
    

};

class B
{
    int B_data;
    public:
    void display();

};

void A :: display()
{
    cout << "A called " << endl;
}

void B :: display()
{
    cout << "B called " << endl;
}


class C: public A ,public B
{
};

int main()
{
    C obj;
    obj.A::display();
    obj.B::display();

    return 0;
}