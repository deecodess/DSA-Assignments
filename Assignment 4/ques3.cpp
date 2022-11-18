//Balanced Parenthesis
#include <iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    cout<<"Enter the string you want to check: ";
    string str;
    cin>>str;
    stack<char> s;
    for(int i=0;i<str.length();i++){
        if(str[i]=='(' || str[i]=='{' || str[i]=='['){
            s.push(str[i]);
        }
        else if(str[i]==')' || str[i]=='}' || str[i]==']'){
            if(s.empty()){
                cout<<"Unbalanced"<<endl;
                return 0;
            }
            else if(str[i]==')' && s.top()=='('){
                s.pop();
            }
            else if(str[i]=='}' && s.top()=='{'){
                s.pop();
            }
            else if(str[i]==']' && s.top()=='['){
                s.pop();
            }
            else{
                cout<<"Unbalanced"<<endl;
                return 0;
            }
        }
    }
}