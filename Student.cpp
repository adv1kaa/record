#include<iostream>
using namespace std;
class Student
{
    private:
    int rollNo;
    string name;
    public:
    //Constructor
    Student(int r, string n)
    {
        rollNo = r;
        name = n;
        cout<<"Student object created" <<endl;
    }
    //Member function
    void display()
    {
        cout << "Roll Number" << rollNo << endl;
        cout << "Name" << name << endl;
    }
    //Destructor
    ~Student()
    {
        cout<<"Stduent object destroyed" <<endl;
    }
};
int main()
{
    int Age; string Name;
    cout << "Enter your name";
    cin >> Name;
    cout << "Enter your roll number";
    cin >> Age;
    Student s1(101, "Arun");
    Student s2(Age, Name);
    s1.display();
    s2.display();
    return 0;
}
