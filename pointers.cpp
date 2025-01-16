#include<iostream>
using namespace std;

int main(){
 int a=3;
 int *b=&a;
 // & (adress of) operator
 cout<<"the adress of a is "<<b<<endl;
 cout<<"the adress of a is "<<&a<<endl;
//  * dereference operator
 cout<<"the value at adress b is "<<*b<<endl;
// pointer o pointer
int **c=&b;
cout<<"the adress of b is"<<&b<<endl;
cout<<"the adress of b is"<<c<<endl;
cout<<"the value at b is"<<*c<<endl;
cout<<"the value at adress of (adress of (c)) is "<<**c<<endl;
    return 0;
}