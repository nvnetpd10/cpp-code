#include<iostream>
using namespace std;
void swap(int a, int b){ //temp a b
    int temp = a;        //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
}
int main(){
    int x , y;
    cout<<"enter"<<endl;
    cin>>x;
    cin>>y;
    swap(x, y); 
    cout<<x<<endl<<y<<endl; 
    return 0;
}
