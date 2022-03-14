#include<bits/stdc++.h>
using namespace std;
#define LIM 1004
int A[LIM], n;

int main()
{
    scanf("%d", &n);
    for(int i=0; i<n; i++)scanf("%d", &A[i]);
    sort(A, A+n);

    int i=0, j=n-1;
    while(i<=j)
    {
        printf("%d ", A[i]);
        if(i != j)
            printf("%d ", A[j]);
        i++;
        j--;
    }
    return 0;
}
