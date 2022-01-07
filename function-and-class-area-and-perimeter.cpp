#include <stdio.h>
#include <iostream>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;
    
    public:
    Rectangle(int l, int b){
        //cout<<"Enter l and b:"<<endl;
        //cin>>l>>b;
        length=l;
        breadth=b;
    }
    void area(){
        int area=length*breadth;
        cout<<"Area:"<<endl<<area<<endl;
    }
    void perimeter(){
        int perimeter=2*(length+breadth);
        cout<<"Perimeter:"<<endl<<perimeter<<endl;
    }
};

int main()
{
    Rectangle r(10,5);
    r.area();
    r.perimeter();
    return 0;
}
