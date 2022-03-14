#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n], sum1=0, sum2=0, ans=0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum1 += a[i];
    }
    sort(a, a+n);
    for(int i=n-1; i>=0; i--)
    {
        sum2 += a[i];
        ans++;
        sum1 -= a[i];
        if(sum1<sum2)break;
    }
    cout<<ans<<endl;
    return 0;
}
