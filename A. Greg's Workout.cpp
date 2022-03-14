#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, che=0, bic=0, bac=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=1; i<n; i+=3)
        che +=a[i];
    for(int i=2; i<n; i+=3)
        bic +=a[i];
    for(int i=3; i<n; i+=3)
        bac +=a[i];

    int mx = max(che, max(bic,bac));
    if(che == mx)printf("biceps\n");
    else if(bic == mx)printf("back\n");
    else if(bac == mx)printf("chest\n");

    return 0;
}
