#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k, n, w, result=0, d=0;
    cin>>k>>n>>w;

    for(int i=1; i<=w; i++)
    {
        result = result + k*i;
    }

    d = result-n;

    if(d<0)
        cout<<0<<endl;
    else
        cout<<d<<endl;
    return 0;
}
