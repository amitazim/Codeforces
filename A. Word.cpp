/*solution 1
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int i, c=0, d=0;

    for(i=0; i<s.size(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            c++;
        else
            d++;
    }

    if(c>d)
    {
        for (i=0; i<s.size(); i++)
            putchar(toupper(s[i]));
    }
    else if(c<d || c==d)
    {
        for (i=0; i<s.size(); i++)
            putchar(tolower(s[i]));

    }
    return 0;
}
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int i, up=0, lo=0;

    for(i=0; i<s.size(); i++)
    {
        if(isupper(s[i]))
            up++;
        else
            lo++;
    }
    if(up>lo)
    {
        for(i=0; i<s.size(); i++)
        {
            s[i] = toupper(s[i]);
        }
        cout<<s<<endl;
    }
    else
    {
        for(i=0; i<s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        cout<<s<<endl;
    }
    return 0;
}
