#include <iostream>
#include <fstream>
using namespace std;
int main()
{

    string s;
    string a;
    string b;
    ofstream out;
    out.open("file", ios::trunc);
    if (out.good())
        cout << "file is created " << endl;
    else
        cout << "file is not created" << endl;
    cout << "enter the text" << endl;
    getline(cin, s);
    out << s;
    out.close();
    ifstream in;
    in.open("file");
    getline(in, a);
    in.close();
    ofstream ou;
    ou.open("imp_txt");
    if (ou.good())
        cout << "2'nd file is created " << endl;
    else
        cout << "2'nd file is not created " << endl;
    ou << a;
    ou.close();
    ifstream io;
    io.open("imp_txt");
    getline(io, b);
    cout << "text in file imp_txt is " << b;
}