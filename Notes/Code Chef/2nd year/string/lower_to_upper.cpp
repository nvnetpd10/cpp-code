#include <iostream>
#include <cstring>


using namespace std;

int main()
{
    char arr[] = "Engineering Discipline.";

    cout << "Original String:\n"<< arr<< endl;
    cout<<"String in UPPERCASE:\n";
    for (int x=0; x<strlen(arr); x++)
        putchar(toupper(arr[x]));
    
    return 0;
}

// when take input from user
/*
#include <iostream>
using namespace std;

int main()
{
   char X;
   cout<<"Enter a character:"; 
   cin>>X;
   X=X-32;
   cout<<"Converted character to UPPERCASE:";
   cout<<X;
   return 0;
} */