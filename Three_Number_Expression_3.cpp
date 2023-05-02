// https://www.codechef.com/DSAPREP_01/problems/EXPRESSION_3?tab=statement

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long a,b,c;
	    cin>>a>>b>>c;
	    if(a==b && b==c)
	        cout<<"NO"<<endl;
	    else if(a+b==c || b+c==a || c+a==b)
	        cout<<"YES"<<endl;
	    else 
	        cout<<"NO"<<endl;
	}
	return 0;
}
