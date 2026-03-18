#include<iostream>
#include<stack>
#include<cctype>
#include<cmath>
using namespace std;

int evaluatePostfix(string expr){
    stack<int> st;
    char ch;

    for(int i=0;i<expr.length();i++){
        ch=expr[i];

        if(isdigit(ch)){
            st.push(ch-'0');
        }
        else{
            int value2=st.top(); st.pop();
            int value1=st.top(); st.pop();

            switch(ch){
                case '+': st.push(value1+value2); break;
                case '-': st.push(value1-value2); break;
                case '*': st.push(value1*value2); break;
                case '/': st.push(value1/value2); break;
                case '^': st.push(pow(value1,value2)); break;
            }
        }
    }
    return st.top();
}
int main(){
    string expr;
    cout << "Enter postfix expression: ";
    cin >> expr;
    int result = evaluatePostfix(expr);
    cout << "Result = " << result << endl;
    return 0;
}