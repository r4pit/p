// https://www.acmicpc.net/problem/
//
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n; scanf("%d", &n);
    vector<int> arr(n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    
    sort(arr.begin(), arr.end());
    int sum=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>sum+1) break;
        else sum+=arr[i];
    }
    printf("%d", sum+1);
}

/*
    
*/