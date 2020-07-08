// Create your own String class.
// Implement String class similar to the strings in Python and C++. 
// (The way we implemented the List class). Overload+ operator to concatenate two string. 
// Overload* operator to multiply string. (Ex: "yash"*2 returns "yashyash"). 2*"yash" should also 
// return "yashyash". Overload the input and output operator. Try to overload as many operators as you can.


#include<iostream>
#include<string.h>
using namespace std;

class String
{
 public:
    char *str;
    int len;
 
    String()
    {
        len=0;
        str=0;
    }

    ~String()
    {
        delete str;
    }

    
    String operator +( const String &x);
    String operator *(const int n);
    friend String  operator *(const int n , String &x);
    friend istream& operator >> (istream &cin, String &obj);
    friend ostream& operator << (ostream &cout, String &obj);
    

};


istream& operator >> (istream &cin, String &obj)
{
    cout << "Enter characters of the string : \n ";         //taking  input 
    obj.str=new char[obj.len+1];
    for (int i = 0; i < obj.len; i++)
        cin >> obj.str[i];
    obj.str[obj.len]='\0';
    return cin;
}

ostream& operator << (ostream &cout, String &obj)
{                                  //printing the string
    for (int i = 0; i < obj.len; i++)
        cout << obj.str[i];

    cout << endl;
    return cout;
}

String String ::operator +(const String &x )
{
                   
    String temp;                                             //overloading + for string concatenation
    temp.len=x.len +this->len;
    temp.str=new char[temp.len+1];
    strcpy(temp.str , this->str);
    strcat(temp.str , x.str );

    return temp;

}

String String :: operator *(const int n)
{
    String temp;                                                //overloading * for n times repetation (string*2)
    temp.len=(this->len) * n;
    temp.str=new char[temp.len+1];
    strcpy(temp.str , this->str);
    for (int i = 1 ; i<n ; i++ )
    {
       strcat(temp.str , this->str);
    }
   
    return temp;
}

String  operator *(const int n , String &x )                    //overloading * for n times repetation(2*string)
{
    String temp;
    temp.len=(x.len) * n;
    temp.str = new char[temp.len + 1];
    strcpy(temp.str , x.str);
    for (int i = 1 ; i<n ; i++ )
    {
       strcat(temp.str , x.str);
    }
    temp.str[temp.len]='\0';

    return temp;
}



int main()
{
    String s1 , s2 , x;
    cout << "Enter size of first string : ";
    cin >> s1.len;
    cin>>s1;
  

    cout << "Enter size of second string : ";
    cin >> s2.len;
    cin>>s2;

    cout << "Enter size of third string : ";
    cin >> x.len;
    cin>>x;


    cout<<"The first string is : "<<s1<<endl;
    cout<<"The second string is : "<<s2<<endl;
    cout<<"The third string is : "<<x<<endl;

    String s3=s1+s2+x;
    cout<<"Concatenated string is : "<<s3<<endl;

    String s4=s1*2;
    cout<<"First string repeated 2 times : "<<s4<<endl;

    String s5=3*s2;
    cout<<"Second string repeated 3 times : "<<s5<<endl;

    return 0;

}


