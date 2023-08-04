#include <iostream>
using namespace std;

class myTime
{
    private:
    int a;
    
    public:
    friend int modify_a(int);
};

int modify_a(int x)
{
    myTime obj;
    obj.a = x;
    cout << obj.a << endl;
}

int main()
{
    modify_a(100);


    return 0;
}