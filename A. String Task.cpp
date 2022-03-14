#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int i;
    getline(cin,str);
    for(i=0; i<str.length(); i++)
    {
        str[i]=tolower(str[i]);
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='y')
            printf(".%c",str[i]);
    }
    return 0;
}
