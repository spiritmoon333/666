#define A 5000
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,score[40],i,j,temp;
    printf ("input n(1-40):");
    scanf("%d",&n);
    printf ("input scores:");
    for (i=0;i<=n-1;i++)
    {
        scanf ("%d",&score[i]);
    }
    for (i=0;i<=n-2;i++)
    {
        for (j=i+1;j<=n-1;j++)
        {
            if (score[i]<score[j])
            {
                temp=score[i];
                score[i]=score[j];
                    score[j]=temp;
            }
        }
    }
    for (i=0;i<=n-1;i++)
    {
        printf ("%d\n",score[i]);
    }
    if (n%2==1)
    printf ("median is %d\n",score[(n-1)/2]);
    else printf ("median is %d\n",(score[n/2-1]+score[n/2])/2);
}
