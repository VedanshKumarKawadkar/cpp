#include<iostream>
#include<string>
#include<string.h>

using namespace std;

/*
class student{
    string name;
    public:
    //string name; 
    // if a data member is outside public
    // declaration(private data member) then 
    //it can be accessed using function calls.
    int age;
    char gender;
    //these are called data members.
    //By default they are private members

    student(string s, int a, int g){
        name = s;
        age = a;
        gender = g;
    }

    void set_name(string s){
        name = s;
    }

    void get_name(string s){
        cout<<s<<endl;
    }

    void printInfo(){
        cout<<"Name: "<<name<<endl;
        //cin>>arr[i].name;
        cout<<"Age: "<<age<<endl;
        //cin>>arr[i].age;
        cout<<"Gender: "<<gender<<endl;
        //cin>>arr[i].gender; 
        cout<<endl;
    }
};

int main(){
    /*
    student arr[2];
    for(int i=0; i<2; i++){
        cout<<"Name: ";
        cin>>arr[i].name;
        cout<<"Age: ";
        cin>>arr[i].age;
        cout<<"Gender: ";
        cin>>arr[i].gender; 
    }

    for(int i=0; i<2; i++){
        arr[i].printInfo();
    }

    return 0;

    student a("Ved", 21, 'M');
    a.printInfo();
}
*/

class student{
    public:
    string name;
    int age;
    char gender;

    //Creatng a constructor
    student(string s, int a, char g){
        name = s;
        age = a;
        gender = g;
    }

    void print(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Gender: "<<gender<<endl;
    }
};

int main(){
    student s("Ved", 23, 'M');
    //s.name = "Vedansh";
    //s.age = 34;
    //s.gender = 'M';
    s.print();
}