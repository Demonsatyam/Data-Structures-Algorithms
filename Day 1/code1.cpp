// Essential things to remember:

#include<iostream>
#include<stack>
using namespace std;


int main(){

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout<<"Stack is empty: "<<s.empty()<<endl;
    cout<<"Top Element: "<<s.top()<<endl;
    s.pop();
    cout<<"Top Element: "<<s.top()<<endl;
    cout<<"Top element after another pop: "<<s.top()<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;

}