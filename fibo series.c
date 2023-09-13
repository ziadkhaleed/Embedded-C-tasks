/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int fibo(int t){

if (t==0){
    return 0;
}
else if(t==1){
    return 1;
}
else{
    return (fibo(t-1)+fibo(t-2));
}
}
int main()
{
    int m,n=0;
    int i;
    printf("enter your num of elements:");
    scanf("\n %d",&m);
    printf("your elements fibo are:");
    for(i=1;i<=m;i++){
        
        printf(" \n%d",fibo(n));
        
        n++;
        
    }
    return 0;
}

