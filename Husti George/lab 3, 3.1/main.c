#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y,z;
    printf("x=",x);
    scanf("%d",&x);
    printf("y=",y);
    scanf("%d",&y);
    z=x;
    for(int i=0; i<y-1; i++)
        z=z*x;
    printf("z=%d",z);
    return 0;
}
