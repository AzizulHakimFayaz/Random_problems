#include <bits/stdc++.h>
#include <string>
using namespace std;
class Student{
    public:
    string name;
    float cgpa;

    void getPercentage(){
        cout<<cgpa*10<<endl;
    }
};



int main(){
    Student s1;
    s1.name = "Aziz";
    s1.cgpa = 3.5;
    s1.getPercentage();
}