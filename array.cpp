#include<iostream>
using namespace std;
int main(){
int marks[4]={23,25,27,29};
/*cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
cout<<marks[3]<<endl;
*/
for(int i=0;i<4;i++){


cout<<"the value of marks <<i<<is"<<marks[i]<<endl;


}
//pointers and arrays
int *p=marks;
cout<<*(p++)<<endl;
// cout<<"the value of *p is "<<*p<<endl;
// cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
// cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
// cout<<"the value of *(p+3) is "<<*(p+3)<<endl;








    return 0;
}