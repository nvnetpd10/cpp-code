#include <iostream>
using namespace std;
int main() {
   int arr[] = {12,5,8,9,7,5,3,2};
   int len = sizeof(arr)/sizeof(arr[0]);
   cout << "Total number of elements in array is "<< len;
}   