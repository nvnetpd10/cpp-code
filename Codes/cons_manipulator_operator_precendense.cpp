#include<iostream>
#include<iomanip>

using namespace std;

int main(){
     //Constants in C++
     const int a = 3;
     cout<<"The value of a was: "<<a<<endl;
     // a = 45; // You will get an error because a is a constant
     cout<<"The value of a is: "<<a<<endl;

    // Manipulators in C++
     int p =3, q=78, r=1233;
     cout<<"The value of a without setw is: "<<p<<endl;
     cout<<"The value of b without setw is: "<<q<<endl;
     cout<<"The value of c without setw is: "<<r<<endl;

     cout<<"The value of a is: "<<setw(4)<<p<<endl;
     cout<<"The value of b is: "<<setw(4)<<q<<endl;
     cout<<"The value of c is: "<<setw(4)<<r<<endl;


    // Operator Precedence
    int y =3, z=4;
     int w  = (y*5)+z;
    int n = ((((y*5)+z)-45)+87);
    cout<<w<<endl;
    cout<<n;
    return 0;
}
