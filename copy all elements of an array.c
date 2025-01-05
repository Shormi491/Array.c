#include<stdio.h>
int main()
{
    int arr1[30],arr2[30],n,i;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);

    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
    for (int i=0;i<n;i++)
    {
        arr2[i]=arr1[i];
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr2[i]);
    }
    return 0;
}
