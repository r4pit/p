// https://www.acmicpc.net/problem/
//
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    string a,b;
    cin >> a >> b;

    vector<vector<int> > dp(a.length()+1, vector<int>(b.length()+1, 0));
    int ans=0;
    for(int i=1; i<=a.length(); i++)
        for(int j=1; j<=b.length(); j++)
        {
            if(a[i]==b[j])
                dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]=0;
            ans=max(dp[i][j], ans);
        }

    printf("%d", ans);
}

/*

*/