#include <iostream>
using namespace std;

class myTime
{
    private:
    int a;
    
   
    friend void modify_a(int);
};

void modify_a(int x)
{
    myTime obj;
    obj.a = x;
    cout << obj.a << endl;
}

int main()
{
    myTime obj;
    modify_a(100);


    return 0;
}