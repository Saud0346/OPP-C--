#include <iostream>
using namespace std;

class my_class
{
public:
    int x, y;
    my_class(int, int);
    my_class operator+(my_class); // Corrected declaration
};

my_class::my_class(int a, int b)
{
    x = a;
    y = b;
}

my_class my_class::operator+(my_class obj)
{
    my_class z(0, 0);
    z.x = x + obj.x;
    z.y = y + obj.y;

    return z;
}

int main()
{

    my_class new_1(1, 2), new_2(2, 1),new_4(1,1);
    my_class new_3(0, 0);

    new_3 = new_1.operator+(new_2)+new_4;

    cout << new_3.x << " " << new_3.y;

    return 0;
}
