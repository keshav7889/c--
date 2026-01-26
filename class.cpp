#include<iostream>
using namespace std;
class student{
 char name[50];
 int roll_number;
 int total_fees;
 int standard;
 int paid_fees;
 public:
 void getdata(void);
 void putdata(void);
 void submit_fees(void);
 
   };
   void student :: getdata(void){
    cout<<"Name of student : ";
    cin>>name;
    cout<<"roll number of student : ";
    cin>>roll_number;
    cout<<"total fees of student is 1 lakh \n";
    cout<<"class of student : ";
    cin>>standard;


  }
  void student :: putdata(void){
  cout<<"\nName :" <<name<<"\n";
  cout<<"\nroll no. : " <<roll_number<<"\n";
  cout<<"\nclass of student " <<standard<<"\n";
}
void student :: submit_fees(void){
        cout<<"fees paid by student : ";
    cin>>paid_fees;
total_fees=100000;
int pf;
pf=total_fees-paid_fees;

cout<<"\nremaining fees student have to submit is : "<<pf<<endl;
}
int main(){
  student k;
  k.getdata();
  k.putdata();
  k.submit_fees();




    return 0;
}