#include <iostream>
using namespace std;

class my_class
{
    
    string name,place;
    int ph;
    float gpa;

    public:

    friend ostream &operator<<( ostream&, const my_class& );
    friend istream &operator>>(istream&,my_class&);
};

ostream &operator<<(ostream & output,const my_class & data)
{
    cout << "Student data is " << endl;
    output << data.name << endl;
    output << data.place << endl;
    output << data.ph << endl;
    output << data.gpa << endl;

    return output;
}

istream &operator >>(istream &input ,my_class &data)
{
    cout << "Enter name,place,phone#,gpa " << endl;
    input >> data.name;
    cout << endl;
    input >> data.place;
    cout << endl;
    cin >> data.ph;
    cout << endl;
    cin >> data.gpa;

    return input;

}

int main()
{

    my_class obj;
    cin >> obj;
    cout << obj;

    return 0;
}