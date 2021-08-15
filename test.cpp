// https://www.acmicpc.net/problem/
//
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int n; scanf("%d", &n);
	vector<int> num(n,0);
	for(int i=0; i<n; i++)
		scanf("%d", &num[i]);

	vector<int> dp;
	dp=num;
	// dp[i]: i번째 수까지의 가장 큰 증가 부분 수열
	for(int i=0; i<n; i++)
		for(int j=0; j<i; j++)
			if(num[i] > num[j])
				dp[i]=max(dp[i], dp[j]+num[i]);

	printf("%d", *max_element(dp.begin(), dp.end()));
}

/*

*/