#include<bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
 
int main(){
	fio;
	int n; cin>>n;
	ll a=0,b=0,total=0,sum=0;
	vector<ll> lks(n); for(ll &x: lks) cin>>x, total+=x;
	ll ans=0;
	for(int msk=0;msk<(1<<n);msk++){
		sum=0;
		for (int i = 0; i < n; ++i)
			if (msk & (1 << i))
				sum += lks[i];
		if(sum<=total/2) ans=max(ans,sum);
	}
	cout<<total-2*ans<<"\n";
 
	return 0;
}
 
 
 