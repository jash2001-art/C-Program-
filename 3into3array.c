#include <stdio.h>
int* func(int*a,int n,int m)
{
    int i,j;
    printf("Printing in func\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",*((a+i*n)+j));
        }
        printf("\n");
    }
    return a;
}

int main()
{
    int a[3][3];
    int i,j;
    int *b;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    b=func(&a,3,3);
    printf("Printing in main\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",*((b+i*3)+j));
        }
        printf("\n");
    }
}