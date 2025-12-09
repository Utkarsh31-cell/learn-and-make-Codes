#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mod=1e9+7;
        /*
        n is the target sum which can be achieved 
        here we can throw dice any number of times so we can have 6 options as dice has 6 face 

        and face had 1,2,3,4,5,6 respectively on it's 6 faces 
        so on each toss/throw we had 6 options -> any of the options can come 
        so whenever we need to find we need to find previous 6 combinations

        for having sum=0 i.e. n=0 has 1 way when [ x!=1 && x!=2 && x!=3 && x!=4 && x!=5 && x!=6 ]
        dp[0] = 1; 
        */
       vector<int>dp(n,0);
       dp[0]=1;
       for(int i=1;i<=n;i++){
        for(int j=1;j<=6;j++){
            if(i-j>=0){
                dp[i]+=dp[i-j];
                dp[i]%=mod;
            }
        }
       }
       cout<<dp[n];
    }
    return 0;
}