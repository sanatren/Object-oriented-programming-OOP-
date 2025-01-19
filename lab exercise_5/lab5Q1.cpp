//1.Write a program to perform addition of two complex numbers using constructor overloading.
//The first constructor which takes no argument is used to create objects which are not initialized,
//second which takes one argument is used to initialize real and imaginary parts to equal values
//and third which takes two argument is used to initialized real and imaginary to two different values.
//Include sum member function that takes two objects and performs the addition of these two objects.
//Write display function to display the object in complex form  i.e. 2+i6 . Write main function to test your program.
#include<iostream>
using namespace std;

class Complex{

    int real, image;

    public:

    Complex(){

    }

    Complex(int r){
        real = r;
        image = r;
    }
    Complex(int r, int i){
        real = r;
        image = i;
    }
    Complex sum(Complex c1, Complex c2){
        Complex res;
        res.real = c1.real + c2.real;
        res.image = c1.image + c2.image;
        return res;
    }

    void display(){

        cout << real << " + i " << image << endl;
    }
};
int main(){
    Complex c1(33);
    Complex c2(9,12);


    Complex res = res.sum(c1,c2);
    cout << " Sum is : ";
    res.display();

    return 0;
}
