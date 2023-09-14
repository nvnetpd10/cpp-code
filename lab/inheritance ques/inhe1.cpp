#include<iostream>
using namespace std;
class student {
protected:
string name;
int roll_number;
public:
    void set_details(string a , int b){
    name = a;
    roll_number = b;
    }
    void get_details(){
    cout<<name<<endl;
     cout<<roll_number<<endl;
    }
};
class exam : public student{
protected:
    float sub1;
    float sub2;
    float sub3;
    float sub4;
    float sub5;
    float sub6;
public:
    void set_marks(int s , int d , int f , int g, int h , int j ){
    sub1 = s;
    sub2 = d;
    sub3 = f;
    sub4 = g;
    sub5 = h;
    sub6 = j;
    }
    void get_marks(){
    cout<<sub1<<endl;
    cout<<sub2<<endl;
    cout<<sub3<<endl;
    cout<<sub4<<endl;
    cout<<sub5<<endl;
    cout<<sub6<<endl;
    }
};

class result: public exam{

public:
    int total;
void display(){
    total = sub1 + sub2+ sub3+ sub4+ sub5+ sub6;
void get_details();
void get_marks();
cout<<total;
}
};
 int main()
 {
 result q;

 q.set_details("navneet" , 211193);
 q.set_marks(90, 89, 89, 78, 78, 89);
 q.display();

 return 0;
}




















