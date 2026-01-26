#include<iostream>
using namespace std;
class item{
 int number;//private by default
 float cost;//private by default
 public:
 void getdata(int a,float b);//prototype declaration o be defined
 //function define inside class
 void putdata(void){
 cout<<"Number :"<<number<<endl;
 cout<<"Cost   :"<<cost<<endl;
  }
};
// member function definition
void item :: getdata(int a,float b){
 number = a;//private variable directly used
 cost = b;
}
int main(){
item x;//create object x
cout<<"\n object x \n";
x.getdata(10,899.9);//call member function
x.putdata();

item y;// create another object
cout<<"\n object y \n";
y.getdata(11,859.9);
y.putdata();
 return 0;



}
