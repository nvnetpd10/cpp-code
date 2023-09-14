#include<bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
 
int main(){
	fio;
	ll n; cin>>n;
	for(int i=1;i<=n;i++){
		//Total number of cell in chessboard
		ll t=i*i;
		//Total number of combination of two places
		ll k=t*(t-1)/2;
		//Total number of posiblities that 2 knights can attack each other
		if(i>2) k-=4*(i-1)*(i-2);
		//so total places will be k
		cout<<k<<"\n";
	}
 
	return 0;
}
 