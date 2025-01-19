#include<iostream>
using namespace std;
class rectangle{
    int length ;
    int breadth;

public:
    void input(int,int);
    int getarea();
    int getperimeter();
};
void rectangle::input(int l,int b){
    length = l;
    breadth = b;

}
int rectangle::getarea(){
    return length * breadth;
}
int rectangle::getperimeter(){
        int ans = 2*(length + breadth);
         return ans;
}


int main(){
    rectangle R1;
    int l,b;
    cout<<"enter the values of length and breadth";
    cin>>l>>b;
    R1.input(l,b);
    cout<<R1.getarea()<<endl;
    cout<<R1.getperimeter();

return 0;
}
