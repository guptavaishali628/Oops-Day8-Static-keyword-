//In-Class:

#include<iostream>
#include<string>
using namespace std;

class A{
    public:
    static int x;
    void incx(){
        x=x+1;
    }
};
int A::x;
int main(){
    A obj1;
    A obj2;
    
    obj1.x=0;
    obj2.x=0;
    
    cout<<obj1.x<<endl;
    obj1.incx();
    
    cout<<obj2.x<<endl;
    obj2.incx();
    
    cout<<obj1.x<<endl;
    cout<<obj2.x<<endl;
    return 0;
}