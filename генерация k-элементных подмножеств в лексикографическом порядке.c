#include <stdio.h>
#include <stdlib.h>
void my_out (int *a, int k)
{
    int i;
    printf ("The set is:{ ");
    for (i=1;i<=k;i++)
    {
        printf ("%i ", a[i]);
    }
    printf ("}\n");
}
int main()
{
    int *a=NULL;
    int n,k,i,p;
    printf ("Enter the number of elements in sequence:");
    scanf ("%i", &n);
    printf ("Enter the number of elements in set:");
    scanf ("%i", &k);
    a = (int*)calloc(n,sizeof(int));
    for( i=1; i<=k; i++ )
        a[i] = i;
    p = k;
    if (a)
    {
        while( p >= 1 )
        {
            my_out(a,k);
            if( a[k] == n )
                p = p - 1;
            else
                p = k;
            if( p >= 1)
                for( i=k; i>=p; i-- )
                {
                    a[i] = a[p] + i - p + 1;
                }
        }
    }
    free (a);
    a=NULL;
    return 0;
}


