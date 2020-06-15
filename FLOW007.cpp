#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll t,n;
	
	cin>>t;
	while(t--){
	    cin>>n;
	    string s = to_string(n);
	    reverse(s.begin(),s.end());
	    cout<<stoi(s)<<endl;
	}
	return 0;
}
