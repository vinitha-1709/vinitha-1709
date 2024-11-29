
#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	printf("Original array:");
	for(int i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	arr[2]=10;
	printf("modified array:");
        for(int i=0;i<5;i++)
        {
                printf("%d",arr[i]);
        }
        printf("\n");
	return 0;
}

