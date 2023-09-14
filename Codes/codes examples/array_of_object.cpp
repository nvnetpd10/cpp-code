#include<iostream>
using namespace std;
class Employee{
    int id ;
    char name[30];
    public:
    void getdata();
    void putdata();  
};
void Employee:: getdata(){
    cin>>id>>name;
    cout<<endl;
}
void Employee::  putdata(){
    cout<<id<<endl<<name;

}
int main(){
    Employee kk;
    kk.getdata();
    kk.putdata();
    return 0;
}