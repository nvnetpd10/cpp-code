#include <iostream>
#include <string>
using namespace std;
int main()
{
    string sample = "Some sample text";
    
    char ch = 't';
    
    bool result = false;
    // Check if string contains the character or not
    for(auto & elem: sample)
    {
        if (elem == ch)
        {
            result = true;
            break;
        }
    }
    if (result)
    {
        cout<<"Yes, string contains the character - "<< ch << endl;
    }
    else
    {
        cout<<"No, string do not contains the character - "<< ch << endl;
    }
    return 0;
}