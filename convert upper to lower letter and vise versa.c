/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char name[30];
    
    printf("enter a name: ");
    fgets(name,30,stdin);
    
    for(int i=0; name[i]!='\0'; i++){
        
        if(name[i]>='a' && name[i]<='z'){   // convert lower to upper
            name[i]=name[i]-32;
        }
            else if(name[i]>'A' && name[i]<'Z'){  // convert upper to lower
                name[i]=name[i]+32;
            }
        }
    
    printf("after converting\n ");
    puts(name);
   

    return 0;
}

