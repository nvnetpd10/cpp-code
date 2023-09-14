#include<bits/stdc++.h>  
using namespace std;  
int main()  
{  
    /* Scan array size */  
    int n;  
    cout<<"Enter array size: ";  
    cin>>n;  
      
    /* Scan array elements */  
    int arr[n];  
    cout<<"\nEnter array elements:";  
    for(int i = 0; i < n; i++)  
    cin>>arr[i];  
      
    /* Printing the subarray */  
    cout<<"All the subarray are:\n";  
    /* Outer loop for first element of subarray */   
    for(int i = 0; i < n; i++)  
    {  
        /* Outer loop for first element of subarray */  
        for(int j = i; j < n; j++)  
        {  
            /* Printing all the subarray */  
            for(int k = i; k <= j; k++)  
            {  
                cout<<arr[k]<<" ";  
            }  
            cout<<"\n";  
        }  
    }  
}  