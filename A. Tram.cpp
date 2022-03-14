#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, maximum=0, remain=0, a, b;
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        remain -= a;
        remain += b;
        maximum = max(maximum,remain);
    }
    cout<<maximum<<endl;
    return 0;
}
