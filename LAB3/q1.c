/* spot out the error
#include<stdio.h>

   int main()
   {
   int testInteger=3000000000;
   printf("Number is %d",testInteger);
   }
*/


#include<stdio.h>

   int main()
   {
   	// the value assigned exceeded the limit of integer, so we use float for this
   float testInteger=3000000000;
   printf("Number is %f",testInteger);
   
   // return 0 was also missing
   return 0;
   }