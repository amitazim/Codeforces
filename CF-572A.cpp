#include<bits/stdc++.h>
using namespace std;

#define LIM 100005
int A[LIM], B[LIM];

int main()
{
    int x, y, n, m;
    scanf("%d %d", &x, &y);
    scanf("%d %d", &n, &m);

    //input
    for(int i=0; i<x; i++)
        scanf("%d", &A[i]);

    for(int i=0; i<y; i++)
        scanf("%d", &B[i]);

    //sort
    sort(A, A+x);
    sort(B, B+y);

    //result
    if(A[n-1]<B[y-m])
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
