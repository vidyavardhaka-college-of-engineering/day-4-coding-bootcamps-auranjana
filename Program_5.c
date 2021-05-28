//You will be given an integer array 'arr'. Your task is to print the largest and smallest element in 'arr'.


#include<stdio.h>

int main()
{
    int arr[10], n, i, large,small;

    //Write your code here
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements in array\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    large=small=arr[0];
    for(i=1;i<n;i++)
    {
      if(large < arr[i])
      {
      large=arr[i];
      }
      else if(small>arr[i])
      small=arr[i];
    }
  
      printf("largest element is %d",large);
      printf("smallest element is %d",small);
  

  
    

  
    return 0;
}
