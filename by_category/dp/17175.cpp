// https://www.acmicpc.net/problem/17175
// 2023-06-29 02:53:45
#include"bits/stdc++.h"
using namespace std;

int main(void)
{
#ifdef LOCAL
#endif
    int n; scanf("%d", &n);
    vector<int> dp(n+1);

    dp[0]=1, dp[1]=1;
    for(int i=2; i<=n; i++)
        dp[i]=(1+dp[i-1]+dp[i-2])%(int)(1e9+7);
    printf("%d", dp[n]);
}

/*
    
*/