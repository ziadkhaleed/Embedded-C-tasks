/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

struct carinfo{
    char type[50];
    char moodle[40];
    char color[30];
    int chassis;
};

void arabety(struct carinfo xp);
int main()
{
    struct carinfo xpl;
    printf("Enter car type ");
    scanf("%s",xpl.type);
     printf("Enter car moodle ");
    scanf("%s",xpl.moodle);
     printf("Enter car color ");
    scanf("%s",xpl.color);
     printf("Enter car chassis ");
    scanf("%d",& xpl.chassis);
    
    arabety(xpl);

    return 0;
}
void arabety(struct carinfo xp){
    
    printf("car type :%s\n moodle :%s\n  color :%s\n chassis :%d",xp.type,xp.moodle,xp.color,xp.chassis);
}

