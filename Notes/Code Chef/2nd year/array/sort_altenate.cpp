#include<bits/stdc++.h>
using namespace std;
void print(int a[] , int n){
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void sortAltenate(int a[] , int n){
    for(int i = 0; i < n ; i+=2){
        if(i+1 < n){
            swap(a[i] , a[i+1]);
        }
    }
}
int main(){
    int e[6] = {3,4,5,6,2,9};
    sortAltenate(e,6);
    print(e,6);
    return 0;
}