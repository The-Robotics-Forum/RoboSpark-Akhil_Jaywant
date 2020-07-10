#include<bits/stdc++.h>
using namespace std;

class Personal{
protected:
    string name,surname,address,dob,mobile;
public :
    Personal(){
        name="";
        surname="";
        address="";
        dob="";
        mobile="";
    }    


    void input_personal(){
        cout<<"enter the name :";
        cin>>name;
        cout <<"enter the surname :";
        cin >>surname;
        cout<<"enter the address :";
        cin >>address;
        cout<<"enter the dob :";
        cin>>dob;
        cout<<"enter the mobile :";
        cin >>mobile;
    }
};

class Professional{
protected :
    string org_name,job_profile,project;
public :
    Professional(){
        org_name="";
        job_profile="";
        project="";
    }

    void Input_professional(){
        cout<<"enter the org_name :";
        cin>>org_name;
        cout<<"enter the job profile :";
        cin>>job_profile;
        cout<<"enter the project :";
        cin>>project;
    }
};

class Academic{
protected :
    string year,cgpa,college,branch;
public :
    Academic(){
        year="";
        cgpa="";
        college="";
        branch="";
    }

    void Input_academic(){
        cout<<"enter the year:";
        cin>>year;
        cout<<"enter the cgpa :";
        cin>>cgpa;
        cout<<"enter the college :";
        cin>>college;
        cout<<"enter the branch :";
        cin>>branch;
    }
};

class Biodata : public Personal,public Professional,public Academic{
    public :
    void get(){
        input_personal();
        Input_professional();
        Input_academic();
    }
    void showData(){
        
        cout << "personal details \n"<< name << "\n" << surname<<"\n"<< address <<"\n"<< dob <<"\n" << mobile <<endl;
        cout << "\nProfessional details \n" <<org_name<<"\n"<<job_profile<<"\n"<<project<<endl;
        cout << "\nAcademic details \n" <<year<<"\n"<<cgpa <<"\n"<<college<<"\n"<<branch<<endl;

    }
};

int main(){

    Biodata obj4;
    obj4.get();   
    obj4.showData();
}