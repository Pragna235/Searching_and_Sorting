#include<stdio.h>
int main()
{
    int i,j,n,arr[100],temp,flag=0;

    printf("\nEnter the size of array = ");
    scanf("%d",&n);

    printf("\nEnter the elements of array in unsorted order!");
    for(i=0;i<n;i++)
    {
        printf("\nElement in arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
    printf("\nSorted Array in ascending order is = ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

