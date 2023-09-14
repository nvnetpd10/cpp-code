#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream out;
out.open("file",ios::trunc|ios::binary);
if(out.good())
cout<<"file is created "<<endl;
else
cout<<"file is not created "<<endl;
char s[100];
cout<<"enter the text"<<endl;
cin.getline(s,100);
out.write((char*)s,sizeof(s));
out.close();
ifstream in;
in.open("file",ios::binary);
char b[100];
in.read((char*) b ,sizeof(b));
cout<<"text in file is : "<<b<<endl;
in.close();

}