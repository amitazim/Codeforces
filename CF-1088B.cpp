#include<bits/stdc++.h>
using namespace std;

#define LIM 100005
int A[LIM], n, k;

int main()
{
    scanf("%d %d", &n, &k);
    for(int i=0; i<n; i++)scanf("%d", &A[i]);
    sort(A, A+n);

    int x=0, y=0;
    for(int i=0; i<k; i++)
    {
        while(A[x]-y==0 && x<n-1)
        {
            x++;
        }
        printf("%d\n",A[x]-y);
        y = A[x];
    }
    return 0;
}
