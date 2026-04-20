#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int age;
    float weight;
    // no paramiterize constrouctor
    Student(){
        age = 10;
        weight = 21.5;
        name = " vishal";
    }
    //paramiterize constrouctor
    Student(string name,int age,float weight){
       this -> age = age;
       this -> weight = weight;
       this -> name = name;
    }

    void Studing(){
        cout<<name<<" is studing.. ";
    }
    ~Student(){
        cout<<"i am Distructor";
    }
};
int main(){
    // Student s1;
    // s1.Studing();
    // Student x(" vishal",21,25.5);
    // x.Studing();
    // cout<<x.age;
    Student* s = new Student(" vishal",21,25.5);
    s->Studing();
    delete s;
    return 0;
}