#include<iostream>
using namespace std;
class mother{
protected:
void display(){
cout<< "who is mother"<<endl;
}
};
class daughter{
protected:
    void display(){
    cout<<"who is daughter"<<endl;
    }
};
int main(){
daughter d1;
d1.display();
d1.mother::display();
}
