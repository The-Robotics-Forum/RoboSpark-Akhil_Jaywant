#include<bits/stdc++.h>
using namespace std;
 class student{
     public:
     string name;
     int roll;
     int *marks=new int[5];
     
     int total=0;
     double cgpa;
 student(){
     name="default";
     roll=0;
     int marks[5]={0,0,0,0,0};
     total=0;
     cgpa=0;}
 void stud_inp(){
     cout<<"enter details "<<endl;
     cout<<"name: ";
     cin>>name;
     cout<<"roll ";
     cin>>roll;
     for(int i=0;i<5;i++){
         cin>>marks[i];
     }}
 int tot(int *arr){
     for(int i=0;i<5;i++){
         total=total+arr[i];
     }
     return total;
 }
 double cgp(int*arr){
     double tot=0;
     for(int i=0;i<5;i++){
         tot=tot+arr[i];}
         cgpa=tot/50;
     return cgpa;
 }
 void display(){
     cout<<name<<endl;
     cout<<roll<<endl;
     cout<<tot(marks)<<endl;
     cout<<cgp(marks);
 }
 void showRank(int c){
     cout<<"rank is: "<<c;}
 void showRank(string name){
     display();
     cout<<"NO rank";
 }
 void showRank(string name,int rank){
     display();
     cout<<"\n"<<rank;
 }
 };
 int main(){
     student s;
     s.stud_inp();
     s.showRank("mohit",6);
     
 }