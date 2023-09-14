#include<iostream>
using namespace std;

class complexno
{
    int real,imag;
    public:
    complexno()
    {
        real=0;
        imag=0;
    }
    complexno(int i)
    {
        real=i;
        imag=i;
    }
    complexno(int a,int b)
    {
        real=a;
        imag=b;
    }
    void add(complexno c1, complexno c2)
    {
        real = c1.real+c2.real;
        imag = c1.imag+c2.imag;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i";
    }
};

int main()
{
    int real,imag;
    cout<<"\n Enter  first complex number";
    cin>>real;
    complexno c1(real);
    cout<<"\n First complex number  ";
    c1.display();
    cout<<"\n\n Enter second complex number : ";
    cin>>real>>imag;
    complexno c2(real,imag);
    cout<<"\n Second complex number";
    c2.display();
    complexno c3;
    cout<<"\n third complex number is - ";
    c3.display();
    cout<<"\n result ";
    c3.add(c1,c2);
    c3.display();
    return 0;
}
