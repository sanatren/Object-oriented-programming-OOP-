#include<iostream>
using namespace std;
class student{
int roll_no;
string name;
public:
    void setdata();
    void showdata();
};
void student::setdata(){
cin>>roll_no;
cin>>name;
}
void student::showdata(){
cout<<roll_no<<endl;
cout<<name;
}
int main(){
student s1;
cout<<"enter the roll no and name"<<endl;
s1.setdata();
cout<<"the given data is"<<endl;
s1.showdata();


}
