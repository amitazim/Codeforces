#include<bits/stdc++.h>
using namespace std;

int arr[101];

int main()
{
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    //int x = sizeof(arr) / sizeof(arr[0]);
    //sort(arr, arr+x);
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
                swap(arr[j],arr[i]);
        }
    }

    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
