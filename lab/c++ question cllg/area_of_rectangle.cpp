#include<iostream>
using namespace std;
class rectangle{
    private:
    int l , b;
    public:
    void yes(int len , int bre){
        l = len;
        b = bre;
    }
    int area(){
        return l*b;
    }
    int perimeter(){
        return 2*(l+b);
    }
};
int main(){
    rectangle r1, r2;
    r1.yes(2,3);
    r2.yes(6,6);
    cout<< "area " <<r1.area()<<endl<<r2.area()<<endl;
    cout<<"perimeter "<<r1.perimeter()<<endl<<r2.perimeter();
        return 0;
    }