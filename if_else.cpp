#include<iostream>

using namespace std;

int main(){
  int age;
  cout<<"enter age"<<endl;
  cin>>age;
 // selection control structure if else 
 /*
  if(age<18){
    cout<<"minor"<<endl;
  }
  else if(age==18){

    cout<<"sweet eighteen"<<endl;
  }
else{
    cout<<"major"<<endl;
}

*/

// selection control structure : switch case
switch(age){

case 18:
cout<<"you are 18"<<endl;
break;

default:
cout<<"no special cases"<<endl;
break;

}



    return 0;
}