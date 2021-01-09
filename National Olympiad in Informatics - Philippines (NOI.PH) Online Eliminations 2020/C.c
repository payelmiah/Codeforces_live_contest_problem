#include<stdio.h>
int main()
{
    int t,l,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&l);
        char s[l];
        int c=0,c1=0,c2=0;
        scanf("%s",s);
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]=='T'&&s[i+1]=='J')
            {
                c++;
                i++;
            }
            else if(s[i]=='s'&&s[i+1]=='i')
            {
                c1++;
                i++;
            }
            else if(s[i]=='l'&&s[i+1]=='o'&&s[i+2]=='g')
            {
                c2++;
                i+=2;
            }
        }
        printf("%d %d %d\n",c,c1,c2);
    }
    return 0;
}
