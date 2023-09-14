#include<iostream>
using namespace std;
int main(){
int op;
float n1 , n2;
 cin>>n1>>n2;
 cin>>op;
 switch(op){
     case 1:
     cout<<n1+n2;
     break;
     case 2:
     cout<<n1-n2;
     break;
     case 3:
     cout<<n1*n2;
     break;
     case 4:
     cout<<n1/n2;
     break;
     deafult:
     cout<<"not valid";
 }
return 0;
}