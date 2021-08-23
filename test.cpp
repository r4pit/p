// https://www.acmicpc.net/problem/
//
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    vector<int> dp(1'000'001,0);
    dp[0]=1, dp[1]=1, dp[2]=2;
    int t; scanf("%d", &t);
    while(t--)
    {
        int n; scanf("%d", &n);
        for(int i=3; i<=n; i++)
            dp[i]=(dp[i-1]+dp[i-2]+dp[i-3])%((int)1e9+9);
        printf("%d\n", dp[n]);
    }
}

/*

*/