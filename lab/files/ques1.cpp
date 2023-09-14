#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char a[100];
    ofstream out;
    out.open("file");
    if (out.good())
    {
        cout << "file is created " << endl;
    }
    else
    {
        cout << "file does'nt created " << endl;
    }
    cout << "enter the text  " << endl;
    cin.getline(a, 100);
    out << a;
    out.close();
    char s[100];
    ifstream in;
    in.open("file");
    in.getline(s, 100);
    cout << "text in file  is  " << s << endl;
}