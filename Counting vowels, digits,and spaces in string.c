/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
   char name[50];
   int vowel=0;
   int digits=0;
   int spaces=0;
   printf("enter a name: ");
   fgets(name,20,stdin);
    
    int len =strlen(name);
    for(int i=0; name[i]!='\0' ; i++){       // or i could use for(i=0;i<len;i++);
        
        if(name[i]=='a' || name[i]=='e' || name[i]=='o' || name[i]=='i'){
            vowel++;
        }
        else if(name[i]>='0' && name[i]<='9'){
            digits++;
        }
        else if(name[i]==' '){
            spaces++;
        }
    }
printf("\nvowels: %d",vowel);
    printf("\ndigits: %d",digits);
       printf("\nspaces: %d",spaces);
   
   
  

    return 0;
}

