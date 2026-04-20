#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    // data member
    string name;
    int age;
    float weight;

    // memeber function

    void run(){
        cout<<name<<" is running..."<<endl;
    }
    void studing(){
        cout<<name<<" is studing..."<<endl;
    }


};
int main(){
    //cout<<sizeof(Student);
    // static Way
    // Student s1;
    // s1.name = "vishal ";
    // s1.age = 21;
    // s1.weight = 25.5;
    // s1.studing();
    // s1.run();
    // dynemic way
    Student* s = new Student();
    s ->name = "Vishal";
    s ->age = 21;
    s -> run();
    cout<< s->age;
    return 0;
}