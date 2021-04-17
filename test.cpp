
#include<iostream>
#include<vector>
#define INF 0x7FFFFFFF
using namespace std;

vector<pair<int,int> > dest[501];
vector<long long> dist(501, INF);

int main(void)
{
    int v,e; scanf("%d%d", &v,&e);
    for(int i=1; i<=e; i++)
    {
        int a,b,c; scanf("%d%d%d", &a,&b,&c);
        dest[a].push_back({b,c});
    }

    dist[1]=0;
    for(int i=0; i<v-1; i++)
        for(int now=1; now<=v; now++)
            for(auto it=dest[now].begin(); it!=dest[now].end(); it++)
            {
                if(dist[now]==INF) // 출발지가 INF라면
                    continue;
                if(dist[it->first] > dist[now]+it->second)
                    dist[it->first]=dist[now]+it->second;
            }
        
    // 재탐색시 업데이트 되면 -1
    for(int i=0; i<v-1; i++)
        for(int now=1; now<=v; now++)
            for(auto it=dest[now].begin(); it!=dest[now].end(); it++)
            {
                if(dist[now]==INF) // 출발지가 INF라면
                    continue;
                if(dist[it->first] > dist[now]+it->second)
                {
                    printf("-1");
                    return 0;
                }
            }

    for(int i=2; i<=v; i++)
        printf("%lld\n", dist[i]==INF ? -1:dist[i]);
    return 0;
}