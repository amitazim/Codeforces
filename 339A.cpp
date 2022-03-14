#include<bits/stdc++.h>

using  namespace std;

int main()
{
    string s;
    cin>>s;
    int k = s.length();
    for(int i=0; i<k; i++)
    {
        if(s[i]!='+' && s[i]=='1')
        {
            cout<<1<<"+"<<endl;
        }
        else if(s[i]!='+' && s[i]=='2')
        {
            cout<<2<<"+"<<endl;
        }
        else if(s[i]!='+' && s[i]=='3')
        {
            cout<<3<<"+"<<endl;
        }
    }
    return 0;
}
