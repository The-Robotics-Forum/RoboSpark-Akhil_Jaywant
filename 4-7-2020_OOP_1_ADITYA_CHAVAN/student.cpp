#include<bits/stdc++.h>
using namespace std;

class Student{
    public :
    string name;
    float cgpa;
    int *mks= new int[5];
    int sum;
    Student(){
        name="";
        cgpa=5.4f;
        for(int i=0;i<5;i++){
            mks[i]=0;
        }
        sum=0;
    
    }

    int totalmarks(){
        for(int i=0;i<5;i++){
            sum=sum+mks[i];
        }
        return sum;
    }

    void calculate_cgpa(){
        cgpa = sum / 50 ;
    }

    void getInput(){
        cout << "Give the input: \n";
        cout << "Name of student ";
        cin >>name;
        cout <<"Enter the marks of the student for 5 subjects \n";
        for(int i=0;i<5;i++){
            cin >> mks[i];
        }
    }

    void showDetails(){
        cout<<"Name of the student is " <<name <<endl;
        cout <<"Total marks of the student is " << sum <<endl;
        cout <<"The cgpa of the student is\n "<<cgpa<<endl;
    }


};
int main(){
    Student s;
    s.getInput();
    s.totalmarks();
    s.calculate_cgpa();
    
    Student s1;
    s1.getInput();
    s1.totalmarks();
    s1.calculate_cgpa();

    s.showDetails();
    s1.showDetails();
    return 0;

}