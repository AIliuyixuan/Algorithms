//����һ��
/*
 
#include <stdio.h>
void bubble_sort(int arr[], int len) 
{ 
    int i, j,k, temp;
    for (i = 0; i < len - 1; i++)
    {
    	 for (j = 0; j < len - 1 - i; j++)
        {
        	if (arr[j] < arr[j + 1]) 
			{
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
		}
	printf("��%d������ý���ǣ�\n",i);
		for(k = 0;k < len;k++)//���forѭ�����п��ޣ���Ҫ�����۲�ÿ������
		{
			printf("%d ",arr[k]);
		}
		printf("\n\n");
	}
	
}
int main() {
    int arr[] = {89,87,112,43,65,34,23,67,432,1,3,4,411};
    int len = (int) sizeof(arr) / sizeof(*arr);
   bubble_sort(arr,len);
    int i;	
    printf("����������˳��:\n"); 
    for (i = 0; i < len; i++)
        printf("%-4d",arr[i]);
    return 0;
} */

//��������
#include<stdio.h>
int main()
{
	int arr[]={3,23,12,54,75,433,745,234};
	int i,j,k,temp;
	
	for(i=0;i<7;i++)
	{
	  for(j=0;j<7-i;j++)
	  {
	    if(arr[j]<arr[j+1])
	     {
		     temp=arr[j];
		     arr[j]=arr[j+1];
		     arr[j+1]=temp;
		 }	
	  } 
	  printf("��%d��������ɺ����������:\n",i);
		for (k = 0;k < 8; k++)
			printf("%-5d", arr[k]);
		printf("\n");
	}
	
	printf("\n����֮���˳����:\n");
	for(i=0;i<8;i++)
	{
	  printf("%-5d",arr[i]);
	}
	
	
	
	return 0;
}


















 






