//Write a C program to get two rows and columns of integers from the user and print them in matrix fashion.

//Example:
//Input: 
//1 2 3 4
//Output: 
//1   2
//3   4
  //Declare all the variables[row, col, array a(2D array), i] used in the code
   //Read the Value of row and coloumn of the matrix (i.e size of matrix) using scanf statement
   //Read the elements of matrix a using nested for loop and scanf statment
   //Print the elements of matrix a using nested for loop and printf statment as per the above specified format
   #include<stdio.h>
   int main(){
   /* 2D array declaration*/
   int a[2][2];
   /*Counter variables for the loop*/
   int i,j;
   printf("Enter the array elements");
   for(i=0;i<2;i++)
   {
     for(j=0;j<2;j++)
     {
       scanf("%d",&a[i][j]);
     }
   }

   //Displaying array elements
   printf("2 dimensional array\n");
   for(i=0;i<2;i++)
   {
     printf("\n");
     for(j=0;j<2;j++)
     {
       printf("\t%d",a[i][j]);
       if (j==2)
       {
         printf("\n");
       }
     }
   }     
       return 0;
   }


