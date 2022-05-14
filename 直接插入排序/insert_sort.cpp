#include<stdio.h>
void inster_sort(int arr[],int len)
{
    int i,j,temp;
    for(i=1;i<len;i++)
    {
        temp=arr[i];
        for(j=i-1;j>=0;j--)
        {
            if(temp<arr[j])
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1]=temp;
    }
}
int main()
{
    int arr[]={324,6,543,4,54,34,67,7,8,59,9,3434};
    int len=(int)sizeof(arr)/sizeof(*arr);
    inster_sort(arr,len);
    int i;
    for(i=0;i<len;i++)
    {
      printf("%-5d",arr[i]);   
    }
    return 0;
}
