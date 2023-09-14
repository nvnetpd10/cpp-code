#include <algorithm> 
#include<iostream>
#include<string>
using namespace std; 
int main() 
{ 
    string str = "Journal Dev reverse example"; 
    reverse(str.begin(), str.end()); 
	cout<<"\n"<<str; 
    return 0;
}

// method 2
/*
#include<iostream>
#include<cstring>
using namespace std; 
int main() 
{ 
    char str[] ="Journal Dev reverse example"; 
    strrev(str);
	cout<<"\n"<<str; 
    return 0;
}



// using loop 3rd method

#include<iostream>
#include<string>
using namespace std; 
int main() 
{ 
    string str="Journal Dev reverse example"; 
    int i;
    cout<<"Printing string in reverse\n";
    for(i = str.length() - 1; i >= 0; i--)
    {
      	cout<<str[i];
    }
    return 0;
}
*/