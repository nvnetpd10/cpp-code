#include<iostream>
using namespace std;
class matrix 
{
        int m, n, x[30][30]; 
public:
        matrix(int a, int b)
       { 
                m=a;
                n=b;
       }
        matrix(){}
        void get();
        void put();
        matrix operator +(matrix);
}; 

void matrix:: get()
{  
        cout<<"\n Enter values into the matrix";
               for(int i=0; i<m; i++)
                       for(int j=0; j<n;j++)
                       cin>>x[i][j];

}

void matrix:: put()
{  
        cout<<"\n the sum of the matrix is :\n";
               for(int i=0; i<m; i++)
               {
                       for(int j=0; j<n;j++)
                       cout<<x[i][j]<<"\t";
                       cout<<endl;
               }
} 

matrix matrix::operator +(matrix b)
{   
        matrix c(m,n);
        for(int i=0; i<m; i++)
                for(int j=0; j<n; j++)
                c.x[i][j]= x[i][j] + b.x[i][j];
        return c;
}

int main()
{    
        int m,n;
        cout<<"\n Enter the size of the array";
        cin>>m>>n;
        matrix a(m,n) , b(m,n) , c;
        a.get();
        b.get();
        c= a+b;
        c.put();
        return 0;
}