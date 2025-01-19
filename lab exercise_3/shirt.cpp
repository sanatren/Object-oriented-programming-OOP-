#include<iostream>
using namespace std;
class shirt{
    public:
float collorsize;
float sleevelength;
    public:
    void setshirts(float,float);
    void getcollorsize(float);
    float getsleevelength();
    float displayclothingfacts();
};
void shirt::setshirts(float c,float s){
    collorsize = c;
    sleevelength = s;
}
void shirt :: getcollorsize(float){
  return collorsize;
}
class pants{
public:
    float waistsize;
    float inseam;
public:
    float setpantss();
    float getwaistsize();
    float getinseam();
    float displayclothingfacts();
};
