#include <iostream>
using namespace std;
class staff
{
protected:
    string name;
    string codename;

public:
    void setdata()
    {
        cout << "enter the name  " << endl;
        cin >> name;
        cout << "enter the code name" << endl;
        cin >> codename;
    }
    void display()
    {
        cout << "the name of the staff memeber is  " << name << endl;
        cout << "the code of that staff member is " << codename << endl;
    }
};
class teacher : public staff
{
protected:
    string subject;
    int publications;

public:
    void setdata()
    {
        cout << "enter the details for the staff of the teacher " << endl;
        staff :: setdata();
        cout << "enetr the name of the subject of that teacher " << endl;
        cin >> subject;
        cout << "enter the no of publications " << endl;
        cin >> publications;
    }
    void display()
    {
        cout << "name of the teacher is " << name << endl;
        cout << "she teaches " << subject << " subject" << endl;
    }
};
class typist : public staff
{
protected:
    int speed;

public:
    void setdata()
    {
        cout << "enter the details of the typist staff " << endl;
        staff :: setdata();
        cout << "enter the typing speed of the typist " << endl;
        cin >> speed;
    }
    void display()
    {
        cout << "the name of the typist is " << name << endl;
        cout << "his typing speed is " << speed << endl;
    }
};
class officer : public staff
{
protected:
    string grade;
public:
    void setdata()
    {
        cout << "enter the details of the officer staff " << endl;
        staff :: setdata();
        cout << "enter the grade of the officer " << endl;
        cin >> grade;
    }
    void display(){
        cout<<"the name of the officer is "<<name<<endl;
        cout<<"grade of that officer is "<<grade<<endl;
    }
};
class regular : public typist{
    protected:
    int daily_wages;
    public:
    void setdata(){
        cout<<"enter the daily wages for typist staff "<<endl;
        cin>>daily_wages;
    }
    void display(){
        cout<<"the daily wages for the typist staff is "<<daily_wages<<endl;
    }
};
class casual : public typist{
    protected:
    int wages;
    public:
    void setdata(){
        cout<<"enter the  wages for typist staff "<<endl;
        cin>>wages;
    }
    void display(){
        cout<<"the  wages for the typist staff is "<<wages<<endl;
    }
};
int main()
{
teacher t;
t.setdata();
typist p;
p.setdata();
officer o;
o.setdata();
regular r;
r.setdata();
casual c;
c.setdata();
t.display();
p.display();
o.display();
r.display();
c.display();
    return 0;
}