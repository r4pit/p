// https://www.acmicpc.net/problem/
//
#include<bits/stdc++.h>
using namespace std;

vector<int> arr;

int main(void)
{
    int n; scanf("%d", &n);
    arr.assign(n,0);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    sort(arr.begin(), arr.end());

    int ans=-10000;
    do
    {
        int ret=0;
        for(int i=0; i<n-1; i++)
            ret+=abs(arr[i]-arr[i+1]);
        ans=max(ans, ret);
    }
    while(next_permutation(arr.begin(), arr.end()));

    printf("%d", ans);
}

/*
    
*/