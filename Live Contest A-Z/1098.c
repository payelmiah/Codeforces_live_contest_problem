#include<stdio.h>
int main()
{
    float i,j;
    int k,c=0;

    for(j=0; j<=2.2; j+=0.2)
    {
        c++;
        if(c==1)
        {

            for(i=1; i<=3; i++)
            {
               int k=j,m=i+j;

                printf("I=%d J=%d\n",k,m);

            }

        }
        else if(c==5)
        {

            for(i=1; i<=3; i++)
            {int k=j,m=i+j;

                printf("I=%d J=%d\n",k,m);

            }
            c=0;
        }
        else
        {
            for(i=1; i<=3.0; i++)
            {

                printf("I=%.1f J=%.1f\n",j,i+j);

            }
        }


    }


}
