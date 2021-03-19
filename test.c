
#include<stdio.h>
int main(void)
{
    int n,k; scanf("%d%d", &n, &k);
    int front=0, rear=n, queue[n*n];
    for(int i=0; i<n; i++)
        queue[i]=i+1;
    printf("<");
    n--;
    while(n--)
    {
        for(int i=1; i<k; i++)
            queue[rear++]=queue[front++]; // push(pop) * k
        printf("%d, ", queue[front++]); // pop
    }
    printf("%d>", queue[front]);
}