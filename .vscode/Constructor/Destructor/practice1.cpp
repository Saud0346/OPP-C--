#include <iostream>

class MyClass {
public:
    int x;
    double y;

    MyClass(int a, double b) : x(a), y(b) {}
};

int main() {
    MyClass obj1(10, 3.14);

    // Copying obj1 to obj2 using the default copy constructor (shallow copy)
    MyClass obj2 = obj1;

    // Modifying obj2 also modifies obj1 since it's a shallow copy
    obj2.x = 20;

    std::cout << "obj1.x: " << obj1.x << " obj1.y: " << obj1.y << std::endl;
    std::cout << "obj2.x: " << obj2.x << " obj2.y: " << obj2.y << std::endl;
    std::cout << "obj1.x: " << obj1.x << " obj1.y: " << obj1.y << std::endl;

    return 0;
}
