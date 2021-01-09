#include<stdio.h>
int main()
{
    int n,m,y,k,min,max,c=0,c1=0,i,j;
    scanf("%d%d",&n,&m);
    int a[n*m],s[50],p[50],cout=0,count=0;
    for(i=0,y=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[j]);
        }
        max=a[0];
        for(k=1;k<m;k++)
        {
            if(a[k]>max)
            {
                max=a[k];

            }
        }
        s[y]=max;
        min=a[0];
        for(k=1;k<m;k++)
        {
            if(a[k]<min)
            {
                min=a[k];

            }
        }
        p[y]=min;
        y++;
    }
    min=s[0];
    for(i=1;i<=y;i++)
    {

        if(s[i]<min)
        {
            min=s[i];

        }
        if(s[i-1]==s[i]||s[i]==s[i+1])
        {
            cout++;
        }
    }
    max=p[0];

    for(i=1;i<=y;i++)
    {

        if(p[i]<max)
        {

            max=p[i];

        }
       if(p[i-1]==p[i] || p[i]==p[i+1]){
            count++;
        }
    }

    if(cout==y-1&&count==y-1)
    {
        printf("0 ");
        printf("0\n");
    }
    else{
    printf("%d ",max);
    printf("%d\n",min);
    }
   main();
    return 0;
}
