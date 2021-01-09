#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d",&a);
    while(a--)
    {
        int c=0;
        scanf("%d",&b);
        int a[b],cu=0;
        for(i=0; i<b; i++)
        {
            scanf("%d",&a[i]);
        }
        if(b==1)
        {
            printf("Yes\n");
            continue;
        }
        else
        {
            for(i=0; i<b-1; i++)
            {

                if(a[i]==a[i+1])
                {

                }
                if(a[i]<a[i+1])
                {
                    c++;
                }
                else if(a[i]>a[i+1])
                {
                    c++;
                }
                else if(a[i]<a[i+1]&&a[i]>a[i+1])
                    {
                        c--;

                }

            }
        }
            if(c==b-1)
            {
                printf("Yes\n");
            }
            else
            {

                printf("No\n");
            }


    }
    return 0;
}
