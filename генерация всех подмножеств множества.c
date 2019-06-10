//Генерирование все подмножеств заданного множества
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int *M=NULL; //--множество
    int num;
    int w; //кол-во элементов множества
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
    for ( i = 0; i < n; i++ ) //перебор битовых масок
    {
        printf("{");
        for ( j = 0; j < w; j++ ) //перебор битов в маске
            if ( i & (1 << j) ) //если j-й бит установлен
               printf("%d", M[j]); //то выводим j-й элемент множества
        printf("}\n");
    }
    free (M);
    M = NULL;
    return 0;
}
