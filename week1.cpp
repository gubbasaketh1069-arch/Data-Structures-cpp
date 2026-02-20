#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    int rollNumber;
    string name;
    float marks;
public:
    Student()
    {
        rollNumber = 0;
        name = "";
        marks = 0;
        cout << "Constructor called\n";
    }
    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }
    void display()
    {
        cout << "Roll: " << rollNumber
             << " Name: " << name
             << " Marks: " << marks << endl;
    }
    ~Student()
    {
        cout << "Object destroyed\n";
    }
};
int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student *s = new Student[n];

    cout << "\nEnter Student Details:\n";
    for(int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i+1 << endl;
        s[i].input();
    }
    cout << "\nStudent Records:\n";
    for(int i = 0; i < n; i++)
    {
        s[i].display();
    }
    delete[] s;
    return 0;
}