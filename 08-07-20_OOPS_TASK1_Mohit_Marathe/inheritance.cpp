#include<bits/stdc++.h>
using namespace std;
 class Personal{
     protected:
     string name,address;
     int mobile;
     public:
     Personal(){};
     void getpdata(){
         cin>>name>>address>>mobile;
     }
     void displaypersonal(){
         cout<<"Name: "<<name<<endl;
         cout<<"Address: "<<address<<endl;
         cout<<"mobile: "<<mobile<<endl;
         
     }
 };
 
 class Profess{
     protected:
     string name_of_org,job_prof,project;
     public:
     Profess(){};
     void getprofdata(){
         cin>>name_of_org>>job_prof>>project;
     }
     void displayprof(){
         cout<<"name_of_org: "<<name_of_org<<endl;
         cout<<"job prof: "<<job_prof<<endl;
         cout<<"name_of_proj: "<<project<<endl;
         
     }
 };
 class acad{
     protected:
     int year_of_pass;
     double pointer;
     string branch;
     public:
      acad(){};
      void getacad(){
          cin>>year_of_pass>>pointer>>branch;
      }
      void displayacad(){
          cout<<"year_of_pass: "<<year_of_pass<<endl;
          cout<<"pointer: "<<pointer<<endl;
          cout<<"branch: "<<branch<<endl;
          
      }
 };
 
 class biodata : public Personal,public Profess,public acad{};
 
 int main(){
     biodata v;
     v.getpdata();
     v.displaypersonal();
     return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 