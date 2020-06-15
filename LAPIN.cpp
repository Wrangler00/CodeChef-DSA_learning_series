#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long int

int main() {
	ll t;
	cin>>t;
	
	string s;
	while(t--){
	    cin>>s;
	    ll l = s.length()/2;
	    
	    if(s.length()%2){
	       s.erase(l,1);
	    }
	    
	    sort(s.begin(),s.begin()+l);
	    sort(s.begin()+l,s.end());
	    
	    if(s.substr(0,l) == s.substr(l,l)){
	        cout<<"YES\n";
	    }else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}
