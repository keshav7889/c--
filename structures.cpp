#include<iostream>
using namespace std;
 typedef struct employee{

int eId;
char favchar;
float salary;

}ep;
union money{

int rice;
char car;
float pounds;

};
int main(){
// ep Harry ;
// union money m1;
// m1.rice=34;
//  cout<<m1.rice<<endl;


// Harry.eId = 1;
// Harry.favchar = 'c';
// Harry.salary = 10000000;
// cout<<Harry.salary<<endl;  

enum meal{breakfast,lunch,dinner};
cout<<breakfast<<endl;
cout<<lunch<<endl;
cout<<dinner<<endl;






return 0;


}