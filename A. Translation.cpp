#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s, r;
    cin>>s;
    cin>>r;

    if(string(s.rbegin(), s.rend())==r)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
