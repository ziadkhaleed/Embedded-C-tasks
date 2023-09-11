/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main(){
int a[1000];
int i;
int n;
int *max;
int *min;
int len;

    
    printf("enter your size of array:");
    scanf("%d",&n);
    printf("Enter your elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    min=max=&a[0];
    for(i=0;i<n;i++){
    if (*max<a[i])
    max=&a[i];
    if(*min>a[i])
    min=&a[i];
}

   printf("minimum num in the array is %d:",*min);
   printf("\nmaximum num in the array is %d:",*max);
   return 0;
}
