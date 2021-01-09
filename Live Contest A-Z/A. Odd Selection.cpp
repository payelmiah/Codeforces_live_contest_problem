#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        int a[n],sum=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<x; i++)
        {
            sum+=a[i];
        }
        if(sum%2==0)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
}
