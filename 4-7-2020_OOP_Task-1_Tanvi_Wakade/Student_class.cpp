#include<iostream>
#include<string>
using namespace std;

class student 
{
    public:
    int Id;
    string name ;
    float *marks = new float[5] , sum , cgpa;


    student()
    {
        Id=1;
        name="Name";
        for (int i=0 ; i<5 ; i++)
        {
            marks[i]=0;
        }
        sum=0;
        cgpa=0;
    }

    void GetInfo()
    {
        cout << "\n Enter The Name of student :";
        getline(cin, name); 
        cout << "\n Enter ID Number  of student :";
        cin>>Id;
        cout << "\n Enter marks for five subjects (out of 100) : ";
        for (int i=0 ; i<5 ; i++)
        {
            cin >> marks[i];
        }
    }

    float Total_marks()
    {
        for (int i=0 ; i<5 ; i++)
        {
            sum += marks[i];
        }
        return sum;

    }

    float CGPA()
    {
        float grade_pt=0;
        for (int i=0 ; i<5 ; i++)
        {
            if(marks[i]>90)     grade_pt+=10;
            else if (marks[i]>80)   grade_pt+=9;
            else if (marks[i]>70)   grade_pt+=8;
            else if (marks[i]>60)   grade_pt+=7;
            else if (marks[i]>50)   grade_pt+=6;
            else if (marks[i]>40)   grade_pt+=5;
            else if (marks[i]>30)   grade_pt+=4;
        }

        cgpa = grade_pt/5;
        return cgpa;
    }

    void Show()
    {
        cout << "\n Name of the student : " << name;
        cout << "\n ID of the student : "<<Id;
        cout << "\n Marks for five subjects are : ";
        for (int i=0 ; i<5 ; i++)
        {
            cout << "\t" <<marks[i];
        }
        cout << "\n Total marks : "<<sum << "/500";
        cout << "\n CGPA : " << cgpa;
        
        delete marks;
    }


};
int main()
{
    student s;
    s.GetInfo();
    float sum , cgpa;
    sum = s.Total_marks();
    cgpa = s.CGPA();
    s.Show();
    return 0;

}

