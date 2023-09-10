/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void swap(int*x,int*y);
int main()
{
    int x,y;
   printf("enter 1st value: ");
   scanf("%d",&x);
   printf("enter 2nd value: ");
   scanf("%d",&y);
   
   printf("\n numbers before swaping is %d after is: %d ", x,y);
   swap(&x,&y);
   
     printf(" \n numbers after swaping is %d after is:  %d ", x,y);
     
   

    return 0;
}

void swap(int*x,int*y){
    int temp;
    
    temp=*x;
    *x=*y;
    *y=temp;
}

