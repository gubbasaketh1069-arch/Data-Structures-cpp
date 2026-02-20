#include <iostream>
#include <vector>
#include <algorithm>  
using namespace std;
int main() {
    vector<int> v;
    int n, element, sValue, cValue;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> element;
        v.push_back(element);
    }
    cout << "\nOriginal Vector: ";
    for (int x : v) {
        cout << x << " ";
    }
    sort(v.begin(), v.end());
    cout << "\nSorted Vector: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << "\n\nEnter element to find: ";
    cin >> sValue;
    auto it = find(v.begin(), v.end(), sValue);
    if (it != v.end()) {
        cout << "Element " << sValue << " found at position: "
             << (it - v.begin()) << endl;
    } else {
        cout << "Element not found in vector." << endl;
    }
    cout << "Enter element to count occurrences: ";
    cin >> cValue;
    int c = count(v.begin(), v.end(), cValue);
    cout << "Element " << cValue << " occurs " << c << " times in vector." << endl;
    return 0;
}