#include <stdio.h>
 
void sort()
 
{
 
     int i,j,a,n=5,number[15];
 
       printf ("\nPlease enter how many numbers you want to sort\n");
 
       scanf ("%d", &n);
 
       printf ("\nPlease enter the numbers to be sorted as ascending order\n");
 
       for (i=0; i<n; ++i)
 
       scanf ("%d",&number[i]);
 
 for (i=0; i<n; ++i)
 
 {
 
   for (j=i+1; j<n; ++j)
 
   {
 
     if (number[i] > number[j])
 
     {
 
       a= number[i];
 
       number[i] = number[j];
 
       number[j] = a;
 
     }
 
   }
 
 }
 
 printf ("Ascending order of entered numbers\n");
 
 for (i=0; i<n; ++i)
 
 printf ("%d\n",number[i]);
 
}
