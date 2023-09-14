#include <iostream>

using namespace std;
int main()
{
    /*Loops in C++:
    There are three types of loops in C++:
        1. For loop
        2. While Loop
        3. do-While Loop
    */

    /*For loop in C++*/
     //int i=1;
     //cout<<i;
     //i++;

    // Syntax for for loop
     //for(initialization; condition; updation)
     //{
      //   loop body(C++ code);
      //}

     for (int i = 1; i <= 40; i++)
     {
         /* code */
         cout<<i<<endl;
     }

    
    /*While loop in C++*/
    // Syntax:
     //while(condition)
     //{
    //     C++ statements;
    // }

    //  Printing 1 to 40 using while loop
     int k=1;
     while(k<=40){
        cout<<k<<endl;
        cout<<"yo"<<endl;
         k++;
     }

    // Example of infinite while loop
    //int u = 1;
    //while (true)
    //{
    //    cout << u << endl;
    //    u++;
    //}

    /* do While loop in C++*/
        // Syntax:
        // do
        // {
        //     C++ statements;
        // }while(condition);
        
    //  Printing 1 to 40 using while loop
     int p=1;
     do{
         cout<<p<<endl;
         p++;
     }while(false);

    return 0;
}
