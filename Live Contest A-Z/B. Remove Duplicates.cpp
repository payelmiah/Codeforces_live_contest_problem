#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i,j;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=n-1; i>=0; i--)
    {
        if(a[i]==0)
        {
           continue;
        }
        for(j=i-1; j>=0; j--)
        {
            if(a[i]==a[j])
            {
                a[j]=0;
            }

        }

    }
    int count=0;
    for(i=0; i<n; i++)
    {
        if(a[i]!=0)
        {
            count++;
        }
    }
    cout<<count<<endl;
    for(i=0; i<n; i++)
    {
        if(a[i]!=0)
        {
            break;
        }
    }
    j=0;
    cout<<a[i];
    for(j=i+1; j<n; j++)
    {
        if(a[j]!=0)
        {
            cout<<" "<<a[j];
        }
    }cout<<endl;

    return 0;
}
