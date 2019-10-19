#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,Pal=0,Copy;
    scanf("%d",&n);
    Copy=n;
    while(Copy>0)
    {
        Pal=Pal*10+Copy%10;
        Copy=Copy/10;
    }
    if(Pal==n)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
