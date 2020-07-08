#include<bits/stdc++.h>
using namespace std;

class String{
    public :
    string str;
    String(){
        str="";
    }
    String(string str){
        this->str=str;
    }
    
    String operator+(String &s){
        String temp;
        temp.str=str+s.str;
        return temp; 
    }

    void operator+(string s){
        str+=s;
    }

    friend void operator+(string s,String &st){
        st.str=s+st.str;
    }

    void display(){
        cout << str << endl;
    }

    void operator*(int s){
        string temp=str;
        for(int i=1;i<s;i++){
            str+=temp;
        }
    }
    friend void operator*(int s,String &st){
        string temp=st.str;
        for (int i=1;i<s;i++){
            st.str=st.str+temp;
        }
    }

    friend istream& operator >>(istream& cin,String &s){
        cout << "Enter a string ";
        cin >> s.str;
        return cin;
    }
    friend ostream& operator << (ostream& cout,String &s){
        cout << s.str<<endl;
        return cout;
    }

};
int main(){
    String s1("aditya");
    s1+" is my name";
    s1.display();

    String s2("adi");
    String s3=s2+s1;
    s3.display();

    "hello "+s1;
    cout<<s1;

    cin >> s2;
    cout <<s2;

    s2 *3;
    cout<<s2;

    2*s2;
    cout<<s2;    
}