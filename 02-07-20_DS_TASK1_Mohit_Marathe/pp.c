#include<stdio.h>

struct stud_record{
    int stud_id;
    char stud_name[20];
    int stud_year;
    float stud_cgpa;
};
int main()
{
    struct stud_record stud1;
    struct stud_record stud2;
    struct stud_record stud3;
    struct stud_record stud4;
    printf("Enter record of STUD1:\n\n ");
    printf("Enter id: ");
    scanf("%d",&stud1.stud_id);
    printf("\nEnter name: ");
    scanf("%s",stud1.stud_name);
    printf("\nEnter year: ");   
    scanf("%d",&stud1.stud_year);
    printf("\nEnter CGPA: ");
    scanf("%f",&stud1.stud_cgpa);

    printf("\n\nEnter record of STUD2:\n\n ");
    printf("Enter id: ");
    scanf("%d",&stud2.stud_id);
    printf("\nEnter name: ");
    scanf("%s",stud2.stud_name);
    printf("\nEnter year: ");   
    scanf("%d",&stud2.stud_year);
    printf("\nEnter CGPA: ");
    scanf("%f",&stud2.stud_cgpa);

    printf("\n\nEnter record of STUD3:\n\n ");
    printf("Enter id: ");
    scanf("%d",&stud3.stud_id);
    printf("\nEnter name: ");
    scanf("%s",stud3.stud_name);
    printf("\nEnter year: ");   
    scanf("%d",&stud3.stud_year);
    printf("\nEnter CGPA: ");
    scanf("%f",&stud3.stud_cgpa);

    printf("\n\nEnter record of STUD4:\n\n ");
    printf("Enter id: ");
    scanf("%d",&stud4.stud_id);
    printf("\nEnter name: ");
    scanf("%s",stud4.stud_name);
    printf("\nEnter year: ");   
    scanf("%d",&stud4.stud_year);
    printf("\nEnter CGPA: ");
    scanf("%f",&stud4.stud_cgpa);

}