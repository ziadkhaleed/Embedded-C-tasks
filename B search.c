/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 
 int i,n,arr[100],key;
 int midd,first,last;
 printf("enter number of elements:");
 scanf("%d",&n);
 printf("enter your elements");
 for(i=0;i<n;i++){
     scanf("%d",&arr[i]);
 }
 printf("enter number to found");
 scanf("%d",&key);
 
 first=0;
 last=n-1;
 while(first<=last){
     midd=(first+last)/2;
 if(key==arr[midd])
 {
     printf("%d is found at postion %d",key,midd);
     break;
 }
 else if(arr[midd]<key)
 first=midd+1;
 else 
 last=midd-1;
 }
 
 if (first>last)
 printf("\nyour number is not found on the list");

    return 0;
}

