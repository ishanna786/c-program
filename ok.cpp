#include<iostream>
using namespace std;
void findMaximum();
class Number1{
    int num1;
public:
    Number1(){
        cout<<"Please enter number1: ";
        cin>>num1;
    }
    friend void findMaximum();
};
class Number2{
    int num2;
public:
    Number2(){
        cout<<"Please enter number2: ";
        cin>>num2;
    }
    friend void findMaximum();
};
void findMaximum(){
    Number1 n1;
    Number2 n2;
    if(n1.num1>n2.num2)
        cout<<"Num1 is Maximum";
    else
        cout<<"Num2 is Maximum";
}
int main(){
    findMaximum();
    return 0;
}

