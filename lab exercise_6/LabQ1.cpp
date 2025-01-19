//Design a class Distance that includes following data members: feet, inches. It has the following member function:-
//Constructor, that initializes the distance to 0,0 by default.
//Parameterized Constructor that initializes the distance with some values; give a check so that the inches part is always less than 12.0.
//Display function
//Overloaded – operator to subtract 2 distances
//Overloaded + operator to add 2 distances
//Overload += and -= operator
//Overload > and < operators to compare two distances

#include<iostream>
using namespace std;
class Distance{
float feet;
float inches;
public:
Distance(){
feet = 0;
inches = 0;
}
Distance(int f,int i){
feet = f;
inches = i;

if(inches>12){
       f++;
      for(int i = 12;i<=inches;i++){
       inches = inches - i;
       }
}
}
void display();
void operator-();
void operator+();
//void operator+=();
//void operator-=();
//void operator>();
//void operator<();
};
void Distance::display(){
cout<<"the subtraction is:"<<feet<<" "<<":"<<inches<<endl;
cout<<"the addition is:"<<feet<<" "<<":"<<inches<<endl;
}
void Distance::operator-(Distance &){
distance p,y;
p.feet = p.feet - y.feet;
p.inches = p.inches - y.inches;
}
void Distance::operator+(Distance &){
    distance p,y
p.feet = p.feet + y.feet;
p.inches = p.inches + y.inches;
}
int main(){
Distance o(5,6);
o.display();
-o;
o.display();
return 0;
}

