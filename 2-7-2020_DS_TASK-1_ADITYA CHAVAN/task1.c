#include<stdio.h>
#include<stdlib.h>

struct student{
    int stud_id;
    char stud_name[10];
    int stud_year;
    float stud_cgpa;
}s[2];

int main(){

    printf("Enter the student information\n");
    for(int i=0;i<2;i++){
        printf("\nEnter details of Student %d",i+1);
        printf("\nEnter Student id ");
        scanf("%d",&s[i].stud_id);
        printf("Enter Student name ");
        scanf("%s",&s[i].stud_name);
        printf("Enter Student year ");
        scanf("%d",&s[i].stud_year);
        printf("Enter Student cgpa ");
        scanf("%f",&s[i].stud_cgpa);
    }

    printf("\nThe student records are \n");
    for(int i =0;i<2;i++){
        printf("\nStudent id - %d \n",s[i].stud_id);
        printf("Student name - %s \n",s[i].stud_name);
        printf("Student year - %d \n",s[i].stud_year);
        printf("Student cgpa - %f \n",s[i].stud_cgpa);
        
    }

    return 0;

}

