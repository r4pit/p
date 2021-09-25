// https://www.acmicpc.net/problem/
//
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n,l; scanf("%d%d", &n,&l);
    vector<int> holes(n);
    for(int i=0; i<n; i++)
        scanf("%d", &holes[i]);

    sort(holes.begin(), holes.end());

    int cur=0, ans=0;
    for(int h : holes)
    {   
        if(cur < h)
        {
            ans++;
            cur=h+l-1;
        }
    }
    printf("%d", ans);
}

/*
    
*/