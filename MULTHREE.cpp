//https://www.codechef.com/LRNDSA01/problems/MULTHREE

#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long int

int arr[] = {2,4,8,6};

int calRemk(ll rem_k,int next){
    int i,sum=0;
    
    for(i=0;i<4;i++)    if(next == arr[i]) break;
    while(rem_k--){
        sum+=arr[i];
        ++i;
        i%=4;
    }
    
    return sum;
}

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    ll k,d0,d1,sum=0,fix=0,i;
	    
	    cin>>k>>d0>>d1;
	    
	    sum = d0+d1;
	    
	    if(k==2){
	        cout<<((sum%3==0)?"YES":"NO")<<endl;
	        continue;
	    }
	    if(k==3){
	        cout<<(((sum+(sum%10))%3==0)?"YES":"NO")<<endl;
	        continue;
	    }
	    
	    sum+=(sum%10);
	    ll next = sum%10;
	    
	    
	    if(next){
	        k-=3;
	    
    	    ll rem_k = k%4;
    	    ll quad_k = k/4;
    	    
    	    sum += calRemk(rem_k,next);
    	    
    	    sum += (ll)(2*(quad_k%3))%3;
	    }
	    
	    if(sum%3==0)
	        cout<<"YES\n";
	    else
	        cout<<"NO\n";
	}
	return 0;
}
