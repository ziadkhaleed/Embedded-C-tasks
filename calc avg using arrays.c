/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()

{
    int size,i,arr[40];
    float avg;
    int sum=0;
    printf("enter size of numbers: ");
    scanf("%d",&size);
    
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    
    sum=sum+arr[i];
    }
    avg=sum/size;
    
    printf("avg of num is: %f",avg);
    
    

    return 0;
}
