#include<iostream>
#include<string.h>
using namespace std;

class PersonalData
{

   protected:

        string name , surname , address , mob_no , dob;
   
    
    public :
        PersonalData()
        {
            name = "Name";
            surname = "Surname";
            address = "Address";
            mob_no = "9000000000";
            dob = "01/01/2000";

        }

        void personal_data()
        {
            cout << "\nEnter your Personal Details : ";
            cout << "\nFirst name : ";
            getline( cin , name );
            cout << "\nSurname : ";
            getline( cin , surname );
            cout << "\nAddress : ";
            getline( cin , address );
            cout << "\nContact number : ";
            getline( cin , mob_no );
            cout << "\nDate of birth (DD/MM/YYYY) : ";
            getline( cin ,dob );

        }

        void show_peronalData()
        {
            cout << "\nPersonal Details : ";
            cout << "\n\t Name : "<<name<<" "<<surname;
            cout << "\n\t Address : "<<address;
            cout << "\n\t Contact number : "<<mob_no;
            cout << "\n\t Date of birth (DD/MM/YYYY) : "<<dob;
        }

};


class ProfessionalData
{
    protected :

        string   org_name , job_profile , project;

    
    public :
        ProfessionalData()
        {
            org_name = "Name of Organisation";
            job_profile = "Job Profile";
            project = "Name of Project";

        }

        void professional_data()
        {
            cout << "\nEnter your Professional Details : ";
            cout << "\nName of Organisation : " ;
            getline( cin , org_name );
            cout << "\nJob profile : ";
            getline( cin , job_profile );
            cout << "\nName of project : ";
            getline( cin , project );
        }

        void show_professionalData()
        {
            cout << "\nProfessional Details : ";
            cout << "\n\t Name of Organisation : "<<org_name;
            cout << "\n\t Job profile : "<<job_profile;
            cout << "\n\t Name of project : "<<project;

        }


};


class AcademicData
{
    protected :

        string  college, branch;
        int year; 
        double cgpa;

    public :
        AcademicData()
        {
            college = "College name";
            branch = "Engineering-branch";
            year = 2000;
            cgpa = 10;
        }

        void academic_data()
        {
            cout << "\nEnter your Academic Details : ";
            cout << "\nCollege name : ";
            getline( cin , college );
            cout << "\nBranch : ";
            getline( cin , branch );
            cout << "\nYear of passing : ";
            cin >> year;
            cout << "\nCGPA : ";
            cin >> cgpa;

        }

        void show_academicData()
        {
            cout << "\nAcademic Details : ";
            cout << "\n\t College name : "<<college;
            cout << "\n\t Branch : "<<branch;
            cout << "\n\t Year of passing : "<<year;
            cout << "\n\t CGPA : "<<cgpa;
            
        } 

};


class BioData : public PersonalData , public ProfessionalData , public AcademicData
{
    public :
        
        
        void getData()
        {
            this->personal_data();
            this->professional_data();
            this->academic_data();
        }

        void showData()
        {
            cout << "\n\nBiodata -";
            this->show_peronalData();
            this->show_professionalData();
            this->show_academicData();

        }

};

int main()
{
    BioData b;
    b.getData();
    b.showData();



    return 0;
}