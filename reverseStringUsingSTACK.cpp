#include<iostream>
using namespace std;

int main(){
    string s; 
    cout<<"enter a string";
    cin>>s;
    stack<char>st;
    for(int i=0;i<s.length();i++){
        st.push(s[i]);
    }
    for(int i=0;i<s.length();i++){
        s[i]=st.top();
        st.pop();
    }
    cout<<"reversed string is "<<s;
    return 0;

    }