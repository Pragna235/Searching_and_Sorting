#include<stdio.h>
int main()
{
    int arr[100],n,i,j,x,flag=0;
    printf("\nEnter the size of array = ");
    scanf("%d",&n);


    printf("\nEnter the elements of array! ");
    for(i=0;i<n;i++)
    {
        printf("\nElement in arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    printf("\nEnter the element to be searched = ");
    scanf("%d",&x);

    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            printf("\nThe element %d is present at index %d",x,i);
            flag=1;
        }
    }
    if(flag==0)
        printf("\nElement %d is not present in the array!",x);



    return 0;
}
