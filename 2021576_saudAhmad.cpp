#include <iostream>
using namespace std;
//mynameissaud

//struct for library management system
struct library_sys
{
    //Book information 
    string book_name,author_name;
    int year_of_publication,ISBN;
    
    //setting data
    void set_info(string book_name,string author_name,int year_of_publication,int ISBN)
    {
        this->author_name = author_name;
        this->book_name = book_name;
        this->ISBN = ISBN;
        this->year_of_publication = year_of_publication;
    }
    
    //getting data
    void get_info()
    {
        
        cout << "Book name is " << book_name << endl;
        cout << "author name is " << author_name << endl;
        cout << "year of publication is " << year_of_publication << endl;
        cout << "ISBN is " << ISBN << endl;
        cout << endl;
    }
};

int main()
{
    //size of array
    int size=0;
    cout << "Enter number of info you want to store " << endl;
    cin >> size;

    //dynamic array of library struct
    library_sys *obj = new library_sys[size];
    string b_name,a_name;
    int year,ISBN;
    

    //setting the data 
    for(int i=0;i<size;i++)
    {
        cout << "Enter book name " << endl;
        cin >> b_name;
        cout << "Enter author name " << endl;
        cin >> a_name;
        cout << "Enter year of publication " << endl;
        cin >> year;
        cout << "Enter ISBN " << endl;
        cin >> ISBN;
        obj->set_info(b_name,a_name,year,ISBN);
        obj++;
    }
    
    //this brings the object to its starting location
    obj = obj-size;
    //Getting the data stored
    while(size >0)
    {
        obj->get_info();
        obj++;
        size--;
    }
}