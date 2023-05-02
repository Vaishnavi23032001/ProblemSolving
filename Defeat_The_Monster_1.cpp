// https://www.codechef.com/DSAPREP_01/problems/MONSTER1

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    long long h,x,y;
	    cin >> h >> x >> y;
	    if(x>y)
	        cout <<1<<endl;
	    else
	        cout <<0<<endl;
	}
	return 0;
}
