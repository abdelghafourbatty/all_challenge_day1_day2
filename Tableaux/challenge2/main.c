#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B;
    printf("le nombre d elements\n");
    scanf("%d",&A);
    float table[A];

    for(B=0;B<A;B++){
        printf("enter elements\n");
        scanf("%f",&table[B]);
    }
    for(B=0;B<A;B++){
        printf("element %d in table is %.f\n",B,table[B]);

    }


    return 0;
}
