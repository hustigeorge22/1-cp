#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,i=1,d,k=0;
    scanf("%d",&number);
    while(i<=number)
    {
        k=0;
        for(d=1; d<=i; d++)
        {
            if(i%d==0)
            {
                k++;
            }
        }
        if(k==2)
        {
            printf("%d ",i);
        }

        i++;
    }

    return 0;
}
