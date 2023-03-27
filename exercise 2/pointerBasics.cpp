#include <iostream>
using namespace std;
int main(){
    int myInt = 15;
    int *myPointer;
    myPointer = &myInt;
    
    cout << &myInt<< endl;
    cout << myPointer << endl;
    
    cout << myInt << endl;
    cout << *myPointer << endl;
    
    myInt = 10;
    
    cout << &myInt << endl;
    cout << myPointer << endl;
    
    cout << myInt << endl;
    cout << *myPointer << endl;
    
    
    
    
}