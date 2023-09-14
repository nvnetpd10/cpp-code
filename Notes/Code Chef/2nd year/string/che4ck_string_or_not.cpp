include <iostream>
#include <string>
#include <typeinfo>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

using namespace std; 
int main ()
{

string ques1= "Client's Name :";
string ques2 = "Client's Address :";
string ques3 = "Mobile Number :";

char answer1 [80];
string answer2;
int answer3;

     cout<<ques1<<endl;    
     cin>>answer1;      

     cout<<ques2<<endl;    
     cin>>answer2; 

     cout<<ques3<<endl;
     cin>>answer3;

       if (isdigit(answer3))
       {
              cout<<"Correct"<<endl;     

              }

        else
        {
          cout<<"Enter Numbers Only"<<endl;  

            }

 system("pause>null");
 return 0;  

}