#include<stdio.h>
void selectionsort(int [],int);
int main()
{
    int temp,i,j,n,arr[100];
    printf("\nEnter the size of the array = ");
    scanf("%d",&n);

    printf("\nEnter the elements of the array in an unsorted order!");
    for(i=0;i<n;i++)
        {   printf("\nElement in arr[%d] = ",i);
            scanf("%d",&arr[i]);
        }
    selectionsort(arr,n);

    return 0;

}

void selectionsort(int arr[],int n)
{
    int i, j, min,temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
                min=j;
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }

    printf("\nSorted array = ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
