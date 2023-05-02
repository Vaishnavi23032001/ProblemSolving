// https://www.codechef.com/DSAPREP_01/problems/LUCNUM?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long x;
	    cin>>x;
	    int i=0;
	    while(x%2==0){
	        x/=2;
	        i++;
	    }
	    if(i%2==0)
	        cout<<1<<endl;
	    else 
	        cout<<0<<endl;
	}
	return 0;
}
