#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k, s;
    scanf("%lld %lld", &n, &k);

    if(n%2==0)
        s = n/2;
    else
        s = (n+1)/2;
    if(k<=s)
        printf("%lld\n",(k*2)-1);
    else
        printf("%lld\n",(k-s)*2);
    return 0;
}
