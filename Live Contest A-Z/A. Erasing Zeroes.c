#include<stdio.h>
int main()
{
    int t,i,l,k,j;
    scanf("%d",&t);
    char s[t];
    while(t--)
    {
        scanf("%s",s);
        int l=strlen(s);
        int c=0;
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]=='1')
            {
                break;
            }

        for(j=l-1;l>=0;j--)
        {
            if(s[j]=='1')
            {
                break;
            }
        }
        for(k=i+1;k<j-1;k++)
        {
            if(s[k]=='0')
            {
                c++;
            }

        }

    }
    printf("%d\n",c);
}
}
