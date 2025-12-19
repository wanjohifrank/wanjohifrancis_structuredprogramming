#include <stdio.h>
#include <stdlib.h>
//Pass by value
void incrementByValue(int*x){
    x=x+1;
    printf("Inside incrementByValue: %d\n");
}

//Pass by reference
void incrementByReference(int*x){
    *x=*x+1;
    printf("Inside incrementByReference: %d\n",*x);
}



int main()
{
    int num = 10;

    printf("Initial value: %d\n",num);


    //Call pass by value function
    incrementByValue(&num);
    printf("After incrementByValue: %d\n",num);

    //Call pass by reference function
    incrementByReference(&num);
    printf("After incrementByReference: %d\n",num);


    return 0;
}
