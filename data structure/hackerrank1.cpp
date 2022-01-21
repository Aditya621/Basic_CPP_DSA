#include <iostream>
#include <sstream>
#include<bits/stdc++.h>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/class Student
{
    private:
    int a,sta;
    string fname,lname;
    public:
void set_age(int age)
{
    a=age;
}
int get_age()
{
    //cout<<a;
    return(a);
}
void set_standard(int standard)
{
sta=standard;
}
int get_standard()
{
    return(sta);
}
void set_first_name(string first_name)
{
    fname=first_name;
}
int get_first_name()
{
    return(fname);
}
string set_last_name(string last_name)
{
lname=last_name;
}
string get_last_name()
{
    cout<<lname;
}
string to_string()
{
    cout<<sta<<","<<fname<<","<<lname<<","<<a;
}
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}

