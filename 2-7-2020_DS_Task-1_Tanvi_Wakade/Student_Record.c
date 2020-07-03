#include<stdio.h>
#include<stdlib.h>

struct student_record
{
    int stud_id;
    char stud_name[30];
    int stud_year;
    float stud_cgpa;
};

int main ()
{
    int no_stud , i;
    struct student_record *p;
    

    printf("\nEnter total number of students : ");
    scanf("%d" , &no_stud);

    p = (struct student_record *)malloc(no_stud * sizeof(struct student_record));

    for ( i=0 ; i<no_stud ; i++)
    {
        printf("\n Enter the details of student -  ");

        printf("\n Enter Student ID : ");
        scanf("%d" , &(p+i)->stud_id);
        fflush(stdin);

        printf("\n Enter name : ");
        gets((*(p+i)).stud_name);
        fflush(stdin);
    
        printf("\n Enter year (1/2/3/4) : ");
        scanf("%d" , &(p+i)->stud_year);

        printf("\n Enter CGPA : ");
        scanf("%f" , &(p+i)->stud_cgpa);
    
    }

    printf("\n The student record - ");
    
    for (i=0 ; i<no_stud ; i++)
    {
        printf("\nName :%s \t ID :%d \t Year :%d \t CGPA :%f" , (p+i)->stud_name , (p+i)->stud_id , (p+i)->stud_year , (p+i)->stud_cgpa );
    }

    return 0 ;


}