#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,posmin=0,posmax=0;
    float min,max,v[100];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%f",&v[i]);
    }
    min=v[0];
    max=v[0];
    for(i=1; i<n; i++)
    {
        if(v[i]<min)
        {
            min=v[i];
            posmin=i;
        }
    }
    for(i=1; i<n; i++)
    {
        if(v[i]>max)
        {
            max=v[i];
            posmax=i;
        }

    }
    printf("%f %d %f %d ",min,posmin,max,posmax);




    return 0;
}
