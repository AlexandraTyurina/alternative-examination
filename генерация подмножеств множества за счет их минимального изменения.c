//Коды Грея
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void set_out (int *a, int n)
{
    int i;
    printf ("Our set is: ");
    for (i=1;i<=n;i++)
    {
        if (a[i]!=0)
            printf ("%i", i);
    }
    printf ("\n");
}
int main()
{
    int *b=NULL;
    int n;
    int j,i,p;
    printf ("The number of elements in set: ");
    scanf ("%i", &n);
    n=n+1;
    b = (int*)calloc(n,sizeof(int));
    if (b)
    {
        i=1;
        for (;i<=n;i++)
        {
            b[i]=0;
        }
        i=0;
        do
        {
            set_out(b,n);
            i = i + 1;
            p = 1;
            j = i;
            while ((j%2)==0)
            {
                j = j/2;
                p ++;
            }
            if (p <= n)
             {
                 b[p] = 1 - b[p];
             }
        }while (p < n);
    }
    free (b);
    b=NULL;
    return 0;
}

