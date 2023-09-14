#include<iostream>
using namespace std;

int main(){
     for (int i = 0; i < 40; i++)
     {
         /* code */
         if(i==2){
             break;
         }
         cout<<i<<endl;
     }
    for (int j = 0; j < 40; j++)
    {
        /* code */
        if(j==39){
            continue;
        }
        cout<<j<<endl;
    }

    
    return 0;
}
