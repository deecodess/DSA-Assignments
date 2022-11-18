#include <iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    cout<<"Enter the string you want to reverse: ";
    string str;
    cin>>str;
    stack<char> s;
    for(int i=0;i<str.length();i++){
        s.push(str[i]);
    }
    for(int i=0;i<str.length();i++){
        str[i]=s.top();
        s.pop();
    }
}