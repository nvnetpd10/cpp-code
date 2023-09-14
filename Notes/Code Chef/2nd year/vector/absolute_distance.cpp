// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;
int findRandom(){
    int nn = ((int)rand() % 2);
    return nn;
}
void generateBinaryString(int n){
    srand(time(NULL));
    string s = "";
    for(int i = 0 ; i< n; i++){
        int x = findRandom();
        s += to_string(x);
    }
    cout<<s;
}
int main(){
    int n = 5;
    generateBinaryString(n);
    return 0;
}