#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v,a,r,p,h,i,j,c=0,w,q,t,y;
    scanf("%d%d%d%d%d",&v,&a,&r,&p,&h);
    w=v+a+r;
    q=v+a+p;
    t=v+r+p;
    y=a+r+p;
    if(w>=h||q>=h||t>=h||y>=h)
    {
        cout<<"WAW"<<endl;
    }
    else
    {
        cout<<"AWW"<<endl;
    }
    return 0;
}
