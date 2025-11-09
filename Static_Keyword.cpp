// Static keyword: it is a reserved keyword in OOps cpp:
// Static keyword can we use as two ways :
// (a) Static variables: 
//(In Functions) variables declared as static in a function are created and initialised once for the lifetime of program:
//(In Class) Static variables in a class are created and initialised once. they are shared by all the object of the class:

// In-Function:

#include<iostream>
#include<string>
using namespace std;

void fun(){
    //int x = 0;
    static int x=0; // iitialised once-- 1 tim run
    cout<<"x:"<<x<<endl;
    x++;
}
int main(){
    fun();
    fun();
    fun();
    return 0;
}
//o/p-->x:0  // when we do not use static keyword:
//      x:0
//      x:0

//o/p-->x:0  // when we use static keyword:
//      x:1
//      x:2



