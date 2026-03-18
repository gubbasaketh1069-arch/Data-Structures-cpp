#include<iostream>
#include<stack>
#include<cctype>
using namespace std;
int prirority(char ch){
    if(ch=='+'||ch=='-'){
        return 1;
    }
    if(ch=='*'||ch=='/'){
        return 2;
    }
    if(ch=='^'){
        return 3;
    }
    return 0;
}
string infixTOpostfix(string infix){
    string postfix="";
    stack<char> st;
    for(int i=0;i<infix.length();i++){
        char ch=infix[i];
        if(isalnum(ch)){
            postfix+=ch;
        }
        else if(ch=='('){
            st.push(ch);
        }
        else if(ch==')'){
            while(!st.empty()&&st.top()!='('){
                postfix+=st.top();
                st.pop();
            }
            st.pop();
        } 
        else{
            while(!st.empty()&&(prirority(st.top())>=prirority(ch))){
                postfix+=st.top();
                  st.pop();
            }
          
            st.push(ch);
        }
    }
    while(!st.empty()){
        postfix+=st.top();
        st.pop();
    }
    return postfix;
}
int main(){
    string infix;
    cout<<"Enter the string:";
    cin>>infix;
    cout<<infixTOpostfix(infix);
    return 0;
}