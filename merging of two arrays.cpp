#include <stdio.h>
#include <stdlib.h>
void insert(int *arr,int size)
{
	int i,el;
	for(i=0;i<size;i++)
	{
		scanf("%d",&el);
		arr[i]=el;
	}
}
void display(int *arr,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
void sort(int *arr,int size)
{
	int a;
	int i=0,j;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(arr[j]>arr[j+1])
			{
				a=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=a;
			}
		}
	}
	
}
void merge(int* arr1,int* arr2,int size)
{
	int *arr=(int*)malloc(size*sizeof(int));
	int i,j;
	for(i=0;i<size;i++)
	{
		arr[i]=arr1[i];
	}
	for(i=size,j=0;i<2*size,j<size;i++,j++)
	{
		arr[i]=arr2[j];
	}
	sort(arr,2*size);
	display(arr,2*size);
}
int main()
{
	int size;
	printf("enter the size of array you want\n");
	scanf("%d",&size);
	int n;
	int *arr1=(int*)malloc(size*sizeof(int));
	int *arr2=(int*)malloc(size*sizeof(int));
	printf("\ninsert elements in array 1\n");
	insert(arr1,size);
	printf("the first array is \n\n");
	display(arr1,size);
	printf("\ninsert elements in array 2\n");
	insert(arr2,size);
	printf("the second array is ");
	display(arr2,size);
	printf("\n\n\nsorted first array is ");
	sort(arr1,size);
	display(arr1,size);
	printf("\nsorted second array is ");
	sort(arr2,size);
	display(arr2,size);
	printf("after merging the new array is\n");
	merge(arr1,arr2,size);
}

