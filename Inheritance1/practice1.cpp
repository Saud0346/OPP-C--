#include <iostream>
using namespace std;

class A
{
public:
    int a, b;
    A()
    {
        cout << "Constructor called for A " << endl;
    }

    ~A()
    {
        cout << "Destructor called for A " << endl;
    }
};

class B : protected A
{
    int c;

public:
   
    void get_c();

    B()
    {
        cout << "Constructor called for B " << endl;
    }

    ~B()
    {
        cout << "Destructor called for B " << endl;
    }
};

void B ::get_c()
{
    c = a + b;
    cout << c;
}

int main()
{
    B obj;
    
    return 0;
}