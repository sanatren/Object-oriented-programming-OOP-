//1.Consider an example of declaring the examination result. Design three classes: Student, Exam, and Result.
//The Student class has data members representing roll number, name. Create the class Exam by inheriting Student class.
//The Exam class adds fields (data members) representing the marks scored in six subjects.
//Derive the Result from the Exam class, and it has its own fields such as total_marks.
//Write an interactive program to model this relationship.
#include<iostream>
using namespace std;
class student{
    protected:
int enroll;
char name[20];
    public:
        student(int r ){
        enroll = r;
       // name = n;
        }
};
class exam : public student{
protected:
    float physics,chemistry,maths,english,computer,PE;
public:

    exam(int aa,int p,int ch,int m,int e,int c,int Pe):student(aa),physics(p),chemistry(ch),maths(m),english(e),computer(c),PE(Pe){}
    void input(){
        cout<<"enter name :";
        cin>>name;
   }
};
class result:public exam{
protected:
    int total_marks;
public:
    result(int a,int c,int d,int e,int f,int g,int h ):exam(a,c,d,e,f,g,h){}
    void total_mrks(){
    total_marks = chemistry + physics + maths + english + computer + PE;
    cout<<"name :"<<name<<endl;
    cout<<"enroll :"<<enroll<<endl;
    cout<<"total marks : "<<total_marks;
    }
};
int main(){
result r1(331,70,60,50,40,80,90);
r1.input();
r1.total_mrks();
}
