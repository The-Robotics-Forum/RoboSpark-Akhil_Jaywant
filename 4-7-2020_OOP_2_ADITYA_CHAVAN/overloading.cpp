#include<bits/stdc++.h>
using namespace std;

class Student{
    public :
    string name;
    int year;

    Student(string nm,int yr){
        name=nm;
        year=yr;
    }

    void showRank(int rank){
        cout<<"The method with only rank called\n";
        cout << "The rank of the student is "<<rank <<endl;
    }

    void showRank(string name){
        cout<<"\nThe method with only name called\n";
        cout << "The name of the student is " << name <<endl;
        cout<<"The year of the student is " << year << endl;
        cout<<"No rank \n";
    }

    void showRank(string name,int rank){
        cout<<"\nThe method with name and rank called\n";
        cout << "The name of the student is " << name <<endl;
        cout<<"The year of the student is " << year << endl;
        cout<<"rank is " << rank << endl;

    }

};

int main(){
    Student s("aditya", 1);
    s.showRank(2);
    s.showRank("aditya");
    s.showRank("aditya",3);
    return 0;
}