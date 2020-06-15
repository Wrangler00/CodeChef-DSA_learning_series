#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main() {
    ll n;
    cin>>n;
    ll ans = 0;
    
    vector<ll> arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    
    sort(arr.begin(),arr.end());
    
    for(ll i=0;i<n;i++){
        ans = max(ans,(n-i)*arr[i]);
    }
    
    cout<<ans;
	return 0;
}
