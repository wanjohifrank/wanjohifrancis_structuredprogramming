#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=10;  //declare and initialize variable
    int*pCount;    //declare integer pointer

    pCount = &count;  //Assign address of count to pointer

    *pCount=25;      //Modify value of count using pointer

    printf("Updated value of count: %d\n",count);



    return 0;
}
