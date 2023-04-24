#include <stdio.h>
#include <stdarg.h>
/*
Steps:

    #include stdarg.h
    int fixedparameter, ...(passing variable number of arguments )
    define a va_list variable
    Begin and end the argu list with va_start and va_end

    eg.
    Add(3, 1, 2, 3 ) = 6  [adds 3 values entered]
    Add(6, 20, 20, 20, 10, 10, 20) = 100
*/

//computes a given number of arguments
int add(int args, ...){
    //start of macro
    va_list ap;
    va_start(ap, args);    //ap = argument parameter | args = arguments

   //process
   int i = 0, sum = 0;
   for(i = 0; i < args; i++)
        sum += va_arg(ap, int);

    va_end(ap);
    return sum;
    //end
}

int main(void){

    printf("Add1 = %d\n", add(3, 1, 2, 3 ));
    printf("Add2 = %d\n", add(5, 5, 10, 15, 20, 25 ));
    return 0;
}


