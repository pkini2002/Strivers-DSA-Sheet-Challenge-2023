#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int prev1=1;
    int prev2=0;
    if(n<=1){
            cout<<n<<endl;
    }
    else{
            int current=0;
            for(int i=2;i<=n;i++){
                    current=prev1+prev2;
                    prev2=prev1;
                    prev1=current;
            }
            cout<<current<<endl;
    }
    return 0;
}

// Alternate Solution

#include<bits/stdc++.h>

using namespace std;

int f(int n,vector<int>&dp){
	if(n<=1){
		return n;
	}
	if(dp[n]!=-1)
		return dp[n];
	return dp[n]=f(n-1,dp)+f(n-2,dp);
}

int main(){
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt","r",stdin);
	// for writing to output.txt
	freopen("output.txt","w",stdout);
#endif
	int n;
	cin>>n;
	vector<int>dp(n+1,-1);
	cout<<f(n,dp);
	return 0;
}
