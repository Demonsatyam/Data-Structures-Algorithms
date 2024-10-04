// operators
// 1. Arithmetic operators: +, -, *, /, %
// 2. Relational operators: ==, !=, >, <, >=, <=
// 3. Logical operators: ||, &&, !

#include <iostream>
using namespace std;

int main(){

    // int a = 10;
    // int b = 20;
    // == equal to
    // != Not equal to
    // > less than
    // < greater than
    // >= less than equal to
    // <= greater than equal to

    // a >= 10
    // a <= 10

    // if(a != 20){
    //     cout<<a<<endl;
    // }else{
    //     cout<<"Condition is wrong"<<endl;
    // }

    // unary operator
    // a++ || a+1 || a+2
    // increment: pre-increment & post increment
    // post increment: a++
    // pre increment: ++a
    // decrement: pre-decrement & post decrement

    // binary operator
    // a+b , a-b

    // int a = 1;
    // cout<<a++<<endl;
    // cout<<++a<<endl;

    // int b = a;
    // cout<<b<<endl;

    // cout<< : print
    // cin>> : user input

    int a;
    cout<<"Enter value of a: ";
    cin>>a;

    int b;
    cout<<"Enter value of b: ";
    cin>>b;

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int division = a / b;
    int remainder = a % b;

    cout<<sum<<endl;
    cout<<difference<<endl;
    cout<<product<<endl;
    cout<<division<<endl;
    cout<<remainder<<endl;







    return 0;

}