#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int Square,n,Prime,ok=0,div,d=0;
    scanf ("%d",&n);
    for(Square=n; Square>=1; Square--)
    {
        if(sqrt(Square)==(int)(sqrt(Square)))
        {
            break;
        }
    }
    printf("%d ",Square);
    Prime=n;
    while(ok==0)
    {
        d=0;
        for(div=1; div<=n; div++)
        {
            if(Prime%div==0)
            {
                d=d+1;
            }
        }
        if(d==2)
        {
            ok=1;

        }
        else
        {
            Prime=Prime+1;
        }
    }
    printf("%d",Prime);


    return 0;
}
