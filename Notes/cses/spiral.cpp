#include<bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
 
int main(){
	fio;
	int t=1;
	cin>>t;
	while(t--){
		ll x,y; cin>>x>>y;
		
		if(x>=y){
			if((x&1)==0) cout<<x*x-y+1<<"\n";
			else cout<<(x-1)*(x-1)+y<<"\n";
		}
		else{
			if((y&1)==1) cout<<y*y-x+1<<"\n";
			else cout<<(y-1)*(y-1)+x<<"\n";
		}
	}
 
	return 0;
}
 