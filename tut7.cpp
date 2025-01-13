#include<iostream>
using namespace std;
int c = 45;
int main(){

// *** build in data types***
//int a,b,c;
/*cout<<"\nenter the value of a:";
cin>>a;
cout<<"\nenter the value of b:";
cin>>b;
c = a+b;
cout<<"\nthe sum is :"<<c;

cout<<"\nthe global c is "<<::c;
*/

//***float,double and long double literals ***
/*float d=34.4f;//we have comfortability in syntax we can use forF both similar with l(long)
long double e = 34.4l;
cout<<"\nthe value of d is "<<d<<"\nthe value of e is " <<e;
// if we write a number for rx 34.9 it will considered as long double we have to write post f so that it will considered as float
cout<<"\nthe size of 34.4 is "<<sizeof(34.4);// by default it is considered as double
cout<<"\nthe size of 34.4f is "<<sizeof(34.4f);// float
cout<<"\nthe size of 34.4F is "<<sizeof(34.4F);//float
cout<<"\nthe size of 34.4l is "<<sizeof(34.4l);//long double
cout<<"\nthe size of 34.4L is "<<sizeof(34.4L);//long double */

//***reference variables***
// rohan > monty > rahu > dangerous coder 
/*float x = 455;
float &y = x;
cout<<"\n"<<x;
cout<<"\n"<<y;*/

//*** type casting ***
// changing of variable from one to another
int a= 45;
float b = 45.46;
cout<<"\nthe value of a is "<<(float)a;
//also we can write float(a)
cout<<"\nthe value of b is "<<int(b); 
int c = int(b);

cout<<"\nthe expression is "<<a+b;
 cout<<"\nthe expression is "<<a+(int)b;  
 cout<<"\nthe expression is "<<a+int(b);
   
   
   
   
    return 0;
}