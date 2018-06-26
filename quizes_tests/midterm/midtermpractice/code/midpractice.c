/* Print the first N multiples of the number entered */
#include <stdio.h>
#include <stdlib.h>

int multiple(int a, int b)
{	
	int ret;
	ret = a * b;
	return ret;
}

int main()
{
   int a, *b;
   int ii, y;


   printf("Enter a number\n");
   scanf("%d",&a);  

   b = (int *) malloc(a);

   /* Fill array b using pointer arithmetic */
   for (ii=0; ii<a; ii++) {
	   y = multiple(a,ii);
	   *(b + ii) = y;
	   
	}
   
   
   
   /* Print array b using array indexing */
   printf ("The multiples of %d are : ",a);
   for (ii=0; ii<a; ii++) {
	   printf("%d ",b[ii]);
	   
   }
   
   return (0);
}
