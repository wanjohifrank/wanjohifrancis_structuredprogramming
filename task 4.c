#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1=15,num2=25;   //declare and initialize 2 integers
   int*ptr1,*ptr2;         //declare 2 integer pointers
   int sum;                //variable to store the result

   ptr1=&num1;          //assigning address of num1 to ptr1
   ptr2=&num2;            //Assign address of num2 to ptr2

   sum =*ptr1+ *ptr2;       //add values using pointer derefencing

   printf("Sum is: %d\n",sum);  //prints the sum




    return 0;
}
