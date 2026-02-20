#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main() {
    set<int> s;
    s.insert(100);
    s.insert(101);
    s.insert(102);
    s.insert(103);
    cout << "Set elements : ";
    for(set<int>::iterator it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    int key 
    cout<<"Enter the key element want:";
    cin>>key;
    if(s.find(key) != s.end())
        cout << "\nElement  key   found";
    else
        cout << "\nElement is not found";

    return 0;
}