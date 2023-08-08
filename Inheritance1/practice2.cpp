 #include <iostream>
using namespace std;

//Function overriding

class A
{
    public:
    void print();
};

void A :: print()
{
    cout << "Print of A is called " << endl;
}

class B: public A
{
    public:
    void print();
};

void B :: print()
{
    cout << "print of B is called " << endl;
}

int main()
{
    B obj;
    obj.print();
    obj.A::print();
    return 0;
}


