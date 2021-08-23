// https://www.acmicpc.net/problem/15988
// 2021-08-24 04:28:36 12ms
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    vector<long long> dp(1'000'001,0);
    dp[0]=1, dp[1]=1, dp[2]=2;
    for(int i=3; i<=1'000'000; i++)
            dp[i]=(dp[i-1]+dp[i-2]+dp[i-3])%(1'000'000'009);
    int t; scanf("%d", &t);
    while(t--)
    {
        int n; scanf("%d", &n);
        printf("%d\n", dp[n]);
    }
}

/*

*/