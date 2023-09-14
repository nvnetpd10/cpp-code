#include <iostream>
using namespace std;
class mother
{
public:
    void display()
    {
        cout << "this is a mother class " << endl;
    }
};
class daughter : public mother
{
public:
    void display()
    {
        cout << "this is a daughter class " << endl;
    }
};
int main()
{
    daughter d;
    d.display(); // daughter class display invoked!!
    d.mother ::display();
    return 0;
}