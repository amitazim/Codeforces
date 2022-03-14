#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,x=0;
    cin>>a;

    for(int i=0; i<a; i++)
    {
        string s;
        cin>>s;
        if(s[1]=='+')
        {
            x=x+1;
        }
        else
        {
            x=x-1;
        }
    }

    cout<<x<<endl;
    return 0;
}
