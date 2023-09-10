/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int a[5]={2,3,4,5,6},i,sum=0;
  float avg;
  
  for(i=0;i<5;i++){
      sum=sum+a[i];
  }
  avg=sum/5.0;
  
  printf("\n sum of 5 num is %d:", sum);
   printf("\n avg of 5 num is %g:", avg);
  
    return 0;
}

