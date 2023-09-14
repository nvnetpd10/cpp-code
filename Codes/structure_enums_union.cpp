#include<iostream>
using namespace std;
struct employee {
    /* data */
    int id ;
    char favchar;
    float salary ;
};
union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};

int main(){
struct employee navneet;      // structure
navneet.id = 66;
navneet.favchar = 'c';
navneet.salary = 120000000;
union money m1;             // union mai ham sirf ek value le sakte hai
m1.rice = 34;
    enum Meal{ breakfast, lunch, dinner};         // enum {} iske andar ki chizo ko intezer value deta hai
    cout<<breakfast<<endl;
    Meal yes = lunch;
    cout<<yes<<endl;
cout<<m1.rice<<endl;
cout<<navneet.salary<<endl;
return 0;
}