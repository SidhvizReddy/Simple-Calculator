#include<iostream>
using namespace std;

class calculator{
public:
    int a,b;

    void input(){
        cout<<"Enter Two Numbers: ";
        cin>>a>>b;
    }

    void addition(){
        cout<<"Addition: " << a+b<<endl;
    }

    void subtraction(){
        cout<<"Subtraction: " << a-b<<endl;
    }   

    void multiplication(){
        cout<<"Multiplication: " << a*b<<endl;
    }

    void division(){
        cout<<"Divide: " << a/b<<endl;
    }

};

int main(){
    calculator cal;
    cal.input();
    cal.addition();
    cal.subtraction();
    cal.multiplication();
    cal.division();
    return 0;
}
