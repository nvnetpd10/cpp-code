#include<iostream>
using namespace std;
int main(){
int marks[] = {23, 45, 56, 89};         // method 1
cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
// if you want change value of marks[2]
marks[2] = 3;
cout<<marks[2]<<endl;
cout<<marks[3]<<endl; 

 int mathMarks[4];                // method 2
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;

    cout<<"These are math marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;
      
// how to print array through a loop
int yo[] = {67 , 99,77 , 66};
for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<yo[i]<<endl;
    }

int* p = marks;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl; 
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
 
return 0;
}
