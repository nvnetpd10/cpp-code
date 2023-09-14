#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream out;
    out.open("file", ios::trunc);
    if (out.good())
        cout << " 1st file is created " << endl;
    else
        cout << "1st file not created " << endl;
    string first;
    cout << "enter the text" << endl;
    getline(cin, first);
    out << first;
    out.close();
    ofstream ou;
    ou.open("imp_txt", ios::trunc);
    if (ou.good())
        cout << " 2nd file is created " << endl;
    else
        cout << "2nd file not created " << endl;
    string second;
    getline(cin, second);
    ou << second;
    ou.close();
    ifstream in;
    in.open("file");
    string input;
    getline(in, input);
    in.close();
    ifstream io;
    io.open("imp_txt");
    string input1;
    getline(io, input1);
    io.close();
    ofstream o;
    o.open("new");
    if (o.good())
        cout << " 3rd file is created " << endl;
    else
        cout << "3rd file not created " << endl;
    string third;
    third = (input + input1);
    o << third;
    o.close();
    ifstream i;
    i.open("new");
    string input3;
    getline(i, input3);
    cout << "text in final file is " << input3 << endl;
    i.close();
    return 0;
}