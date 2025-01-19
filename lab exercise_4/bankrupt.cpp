#include<iostream>
using namespace std;
class bank{
int Ac_number;
string name;
string Ac_type;
int balance;
public:
    void initial();
    void deposit();
    void check_balance();
    void display();
};
void bank::initial(){
cin>>Ac_number;

cin>>name;

cin>>Ac_type;

cin>>balance;
}
void bank::deposit(){
cout<<"money to be deposit :" ;
int balancee;
cin>>balancee;
balance = balance + balancee;
cout<<endl;
}

void bank::check_balance(){
cout<<"amount to be withdrawn : ";
int value;
cin>>value;
if(value <= balance){
balance = balance - value;
cout<<endl;
cout<<"the amount withdrawn is : "<<value;
cout<<endl;
cout<<"remaining balance is : "<<balance;
}

if(value>balance){
    cout<<"withdrawn failed";
    cout<<endl;
}
}
void bank::display(){
cout<<Ac_number<<endl;
cout<<name<<endl;
cout<<Ac_type<<endl;
cout<<balance<<endl;
cout<<endl;
}
int main(){

bank c1;
c1.initial();
cout<<endl;
int choice;
cout << "Enter the desired choice: " << '\n' ;
    cout << "Press 1 for deposit" << '\n';
    cout << "Press 2 for withdraw" << '\n';
    cin >> choice;

if (choice==1){c1.deposit();}
cout<<endl;
 if else (choice==2){c1.check_balance();
cout<<endl;}
else{
        "wrong choice"
c1.display();
}
}

