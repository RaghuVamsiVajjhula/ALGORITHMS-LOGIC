#include<stdio.h>
#include<stdlib.h>

int LinearSearch(int newArray[100],int val,int totalelements) //val consists of the element which we need to search
{
    int p=0;
    while(p!=totalelements)
    {
        if(newArray[p]==val)
        {
            return 1;
        }
        
        p++;
    }
    return -1;
}
int main()
{
    int value;
    int arr[100];
    int i;
    int elements;
    printf("Enter the number of elements you want in an array:\n");
    scanf("%d",&elements);
    //The below for loop is to take input from the user the values of the array elements.
    for(i=0;i<elements;i++)
    {
        printf("Enter value of element:\n");
        scanf("%d",&arr[i]);
    }
    printf("The data present in the array is:\n");
    for(i=0;i<elements;i++)
    {
        printf("%d\n",arr[i]);
    }

    printf("Enter the element to search the data:");
    scanf("%d",&value);
    int answer=LinearSearch(arr,value,elements);
    if(answer==1)
    {
        printf("Element Found\n");
    }
    if(answer==-1)
    {
        printf("Element not found\n");
    }
    return(0);
}