#include <iostream>
using namespace std;

class prac
{
    public:
    prac();
    int x,y;

    void the_fun();

    ~prac()
    {
        cout << "Destructor called " << endl;
    }
};

void prac :: the_fun()
{
    cout << "Hello world " << endl; 

}

prac :: prac()
{
    cout << "Constructor called " << endl;

    // this->x = x;
    // this->y = y;
}
int fun()
{
    static int var = 0;

    for(int i=0;i<5;i++)
    {
        var++;
    }

    return var;

}
int main()
{
    // int var = fun();
    // cout << var << endl;
    // var = fun();
    // cout << var;

    // prac obj(20,30);
    // cout << obj.x << " " << obj.y << endl;
    // obj.the_fun();

    prac *obj = new prac[5];

    for(int i=0;i<5;i++)
    {
        obj[i].x = i+8;
    }

    cout << obj[0].x;

    return 0;

}