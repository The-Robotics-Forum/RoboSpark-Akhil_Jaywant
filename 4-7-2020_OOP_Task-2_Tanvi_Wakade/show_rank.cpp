// Overload the showRank function in the following way -
// When the function has only int as an argument, print that integer as rank.
// When the function has only student as an argument, print the student details and print "no rank".
// When the function received one student and one int as arguments, print the student details and the rank.
// Rank is not a data member of Student
// Remember : Avoid copy pasting the code. Define proper functions. (edited) 


#include<iostream>
#include<string>
using namespace std ;

class student_info
{
    public:
    int Id , year ,cgpa;
    string name ;


    student_info()
    {
        Id=1;
        name="Name";
        year=1;
        cgpa=9;
    }

    void GetInfo()
    {
        cout << "\n Enter The Name of student :";
        getline(cin, name); 
        cout << "\n Enter ID Number  of student :";
        cin>>Id;
        cout << "\n Enter year of student(1/2/3/4) :";
        cin>>year;
        cout << "\n Enter CGPA of student :";
        cin>>cgpa;
    }

};
int get_rank()
{
    int rank;
     cout << "\n Enter Rank of student : ";
     cin >> rank;
     return rank;
}

void show_info(class student_info s)
{
    cout << "\n Name of the student : " <<s.name;
    cout << "\n Id nuber of the student : " << s.Id;
    cout << "\n Year of the student :" << s.year;
    cout << "\n CGPA of the student :" <<s.cgpa;
}

void show_rank(int rank)

{
    if(rank == 0)
    {
        cout << "\n Rank : NO RANK \n\n";
    }
    else
    {
        cout << "\n Rank : "<<rank << "\n\n";
    }
}

void show_rank(class student_info s)
{
    show_info(s);
    show_rank(0);
}

void show_rank(int rank ,class student_info s)
{
    show_info(s);
    show_rank(rank);
    
}

int main()
{
    student_info s;
    int rank=0;
    s.GetInfo();
    fflush(stdin);
    
    cout <<"\n Enter the rank : ";
    cin >> rank;
    fflush(stdin);
    
    show_rank(rank);
    show_rank(s);
    show_rank(rank , s);
    
    
    return 0;
}

