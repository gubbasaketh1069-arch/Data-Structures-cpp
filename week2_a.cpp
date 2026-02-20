#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
float add(float a, float b) {
    return a + b;
}
int main(){
     int i1 = 111, i2 = 222;
    float f1 = 26.7, f2 = 48.5;
    cout << "Addition of integers: " << add(i1, i2) << endl;
    cout << "Addition of floats: " << add(f1, f2) << endl;
}