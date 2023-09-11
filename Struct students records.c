/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct student{
    char name[50];
    float gpa;
    int id;
};
void display_records (struct student stud[]){
    
    float max=0;
    for(int s=0;s<3;s++){
    if( stud[s].gpa > max){
    max =stud[s].gpa;
}
}
    for(int s=0;s<3;s++){
        if(max==stud[s].gpa){
            printf(" highest rank name:%s",stud[s].name);

    printf(" \n gpa:%f ",stud[s].gpa);
   
    printf("\n id: %d",stud[s].id);
        }
    }
}

int main()
{
    struct student stud[30];
    printf("enter ur 3 student records please \n");

    for(int i=0;i<3;i++){

    printf("enter %d student name:\n",i+1);
    scanf("%s",stud[i].name);
    printf("enter your gpa:\n");
    scanf("%f",&stud[i].gpa);
    printf("enter id max 4 num\n");
    scanf("%d",&stud[i].id);
    printf("\n");
    }
    
     for(int i=0;i<3;i++){
    printf(" student %s :",stud[i].name);
   
    printf("  gpa: %f",stud[i].gpa);
    
    printf("id:%d",stud[i].id);
    
     printf("\n");

    }
    
    display_records(stud);

  return 0;
}

