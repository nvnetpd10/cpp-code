#include<iostream>
using namespace std;
class student{
	public:
		string name;
		string degree;
		public:
			void setdata(){
				cout<<"enter the name of your school/university"<<endl;
				cin>>name;
				cout<<"enter the highest degree obatined by you from that university "<<endl;
				cin>>degree;
			}
			void display(){
				cout<<"the name of your university is "<<name<<endl;
				cout<<"your highest degree from "<<name<<" is "<<degree<<endl;
			}
};
class employee {
	protected :
		string employe;
		int no;
		public:
			void setdata(){
				cout<<"enter the name of the employee "<<endl;
				cin>>employe;
				cout<<"enter the employee no "<<endl;
				cin>>no;
			}
			void display(){
				cout<<"the name of the employee is "<<employe<<endl;
				cout<<"employee no is "<<no<<endl;
			}
};
class manager : public employee{
	protected :
		string title;
		float dues;
		public:
			void setdata(){
				cout<<"for 2nd employee "<<endl ;employee :: setdata();
				cout<<"enter the title "<<endl;
				cin>>title;
				cout<<"enter the dues amount "<<endl;
				cin>>dues;
				
			}
			void display(){
				
				employee :: display();
				cout<<"title is "<<title<<endl;
				cout<<"due amount is "<<dues<<endl;
				cout<<employe<<" who is an "<<title<<" educated from "<<"juet"<<endl;
			}
};
class scientist : public employee{
	protected :
		int publications;
		public:
			void setdata(){
			cout<<"for 3rd employee "<<endl;	employee :: setdata();
				cout<<"enter the no of publiction "<<endl;
				cin>>publications;
			}
			void display(){
				employee :: display();cout<<endl;
				cout<<employe<<" who is an scientist "<<" educated from "<<" juet"<<endl;
				cout<<"no of publictions that  scintist has "<<publications<<endl;
			}
};
class labourer : public employee{
	public:
		void setdata(){
		cout<<"for 4th employee "<<endl;	employee :: setdata();
		}
		void display(){
		employee :: display();
		}
};
int main(){
	student s;
	s.setdata();
	employee e;
	e.setdata();
	manager m;
	m.setdata();
	scientist s1;
	s1.setdata();
	labourer l;
	l.setdata();
	s.display();
	e.display();
    m.display();
    l.display();
}