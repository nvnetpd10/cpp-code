#include<bits/stdc++.h>
using namespace std;
void print(int a[] , int n){
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void sort01(int *arr, int n)
{
   //   Write your code here ( left = i , right = j)
   int i = 0;
   int j = n-1;
   while(i < j){
      while(arr[i]== 0 && i < j){
         i++;
      }
      while(arr[j]== 1  && i < j){
         j--;
      }
      if( i < j){
         int temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
         i++;
         j--;
      }
   }
}
int main(){
    int e[6] = {1,0,0,1,1,0};
    sort01(e,6);
    print(e,6);
    return 0;
}