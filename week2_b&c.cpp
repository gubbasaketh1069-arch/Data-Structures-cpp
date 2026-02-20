#include <iostream>
#include <string>
template <class T>
void swapValues(T &x, T &y) {
    T temp = x;
    x = y;
    y = temp;
}
int main() {
    int i1 = 111, i2 = 222;
    float f1 = 26.7, f2 = 48.5;
    string s1 = "Good", s2 = "Evening";
    cout << "\nBefore swapping integers: ";
    cout << i1 << " " << i2 << endl;
    swapValues(i1, i2);
    cout << "After swapping integers: ";
    cout << i1 << " " << i2 << endl;
    cout << "\nBefore swapping floats: ";
    cout << f1 << " " << f2 << endl;
    swapValues(f1, f2);
    cout << "After swapping floats: ";
    cout << f1 << " " << f2 << endl;
    cout << "\nBefore swapping strings: ";
    cout << s1 << " " << s2 << endl;
    swapValues(s1, s2);
    cout << "After swapping strings: ";
    cout << s1 << " " << s2 << endl;
    return 0;
}
