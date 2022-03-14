#include<bits/stdc++.h>
using namespace std;

char A[101];

int main()
{
    int one=0, zero=0;
    scanf("%s",&A);

    for(int i=0; A[i]; i++)
    {
        if(A[i]=='1')one++;
        if(A[i]=='0' && one>0)zero++;
    }

    if(zero >= 6)printf("YES\n");
    else printf("NO\n");

    return 0;
}
