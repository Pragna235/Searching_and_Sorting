#include<stdio.h>

int rec_bin(int [],int i,int l,int x);

int main()
{
    int  a[100],n,x,i,l;
    printf("\nEnter the size of the array = ");
    scanf("%d",&n);

    printf("\nEnter elements into array in ascending order:");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\nEnter the element to be searched = ");
    scanf("%d",&x);

    i=0,l=n-1;

    i=rec_bin(a,i,l,x);
    printf("\nElement %d is found at %d",x,i);

    return 0;
}

rec_bin(int a[],int i,int l,int x)
{
    int mid;
    if(i==l)
        {
          if(x==a[i])
             return i;
          else
             return -1;
        }
  else
  {
      mid=floor((i+l)/2);

      if(x==a[mid])
        return mid;

      else if(x<a[mid])
        return rec_bin(a,i,mid-1,x);

      else if(x>a[mid])
        return rec_bin(a,mid+1,l,x);
  }


}
