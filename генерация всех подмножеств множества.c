
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int *M=NULL;
    int num;
    int w; 
    int i, j, n;
    printf ("Enter the number of elements in your set:");
    scanf ("%i", &num);
    getchar();
    w = num;
    M = (int*)malloc(num * sizeof(int));
    if (M)
    {
        for (i=0;i<num;i++)
        {
            printf ("Enter your element:");
            scanf ("%i", &M[i]);
            getchar();
        }
    }
    n = pow(2, w);
    for ( i = 0; i < n; i++ ) 
    {
        printf("{");
        for ( j = 0; j < w; j++ ) 
            if ( i & (1 << j) ) 
               printf("%d", M[j]); 
        printf("}\n");
    }
    free (M);
    M = NULL;
    return 0;
}
