// https://www.acmicpc.net/problem/
//
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    unsigned int n; scanf("%ud", &n);
    int ans;
    for(int i=1; i<100000; i++)
    {
        if((long long)(i)*(i+1)/2 > n) break;
        ans=i;
    }
    printf("%d", ans);
}

/*
    
*/