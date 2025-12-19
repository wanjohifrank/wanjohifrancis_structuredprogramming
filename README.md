task one 
A normal variable directly stores a data value (e.g., an integer or a character) in a specific memory location. When you access the variable, you read or modify the actual value stored at that memory address.

A pointer, on the other hand, stores the memory address of another variable rather than the data itself. To access or modify the value, you first use the pointer to get the address, then read or write the value at that address via dereferencing

question 2
Variable Declaration vs. Variable Definition
Variable Declaration
Declaration tells the compiler about the variable's type and name but does not allocate memory.
It informs the compiler that the variable exists somewhere.
Usually used in header files or external variables.
Example:

extern int x;  // Declaration: x is an int, defined elsewhere
Variable Definition
Definition allocates memory for the variable.
It also initializes the variable if an initial value is provided.
There can be only one definition of a variable in a program.
Example:

int x;         // Definition: memory allocated for x
int y = 10;    // Definition with initialization
2. Pointer Declaration vs. Pointer Definition
Pointer Declaration
Declares a pointer variable that can hold the address of a variable of a specific type.
Like normal variables, declaration can be separate from definition if using extern.
Example:

extern int *ptr;  // Pointer declaration: ptr is a pointer to int, defined elsewhere
Pointer Definition
Allocates memory for the pointer variable itself.
The pointer can be initialized to point to a specific variable or NULL.
Example:

int *ptr;        // Pointer definition: memory allocated for ptr
int a = 5;
ptr = &a;        // ptr now points to a
3. Role of * and &
* (Dereference Operator and Pointer Declaration)
In pointer declaration: * indicates that the variable is a pointer to a type.
int *p;  // p is a pointer to int
In expressions: * dereferences the pointer, i.e., accesses the value at the memory address the pointer holds.
int val = *p;  // val gets the value pointed to by p
& (Address-of Operator)
Returns the memory address of a variable.
int a = 10;
int *p = &a;



question 3
Dereferencing a pointer means accessing or manipulating the value stored at the memory address the pointer is pointing to. This is done using the dereference operator

Example 
#include <stdio.h>

int main() {
    int num = 10;      // Declare an integer variable 'num' with value 10
    int *ptr = &num;   // Declare a pointer 'ptr' that stores the address of 'num'

    // Accessing the value using the pointer (dereferencing)
    printf("Value of num using pointer: %d\n", *ptr);

    // Changing the value of 'num' using the pointer
    *ptr = 20;

    // Print the changed value of 'num'
    printf("New value of num after dereferencing and assignment: %d\n", num);

    return 0;
}
Explanation
Pointer Declaration and Initialization:
int *ptr = &num; means ptr is a pointer to an integer, and it stores the address of the variable num.
Dereferencing to Access Value:
*ptr accesses the value stored at the memory address held by ptr.
So, *ptr is equivalent to num in this context.
printf("Value of num using pointer: %d\n", *ptr); prints the value 10.
Dereferencing to Modify Value:
*ptr = 20; changes the value stored at the memory address pointed to by ptr.
This effectively changes num to 20.
Printing num after this shows the updated value 20.
