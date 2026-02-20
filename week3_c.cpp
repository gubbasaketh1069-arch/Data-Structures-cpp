#include <iostream>
#include <map>
using namespace std;
int main() {
    map<int, string> students;
    students[001] = "Sushanth";
    students[002] = "Tagore";
    students[003] = "Saketh";
    cout << "Student Details:\n";
    for(map<int, string>::iterator it = students.begin(); it != students.end(); it++) {
        cout << "ID: " << it->first << " Name: " << it->second << endl;
    }

    return 0;
}