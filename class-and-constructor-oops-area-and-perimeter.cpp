#include <iostream>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breath;
    
    public:
    Rectangle(){length=breath=1;}   //default constructor
    Rectangle(int l,int b);         //parameter constructor overloading
    int area();                     //facilitator - perform functions
    int perimeter();                //facilitator - perform functions
    int getLength(){return length;} //accessor
    void setLength(int l){length=l;} //mutator
    ~Rectangle();           //destructor to free dynamic memory
};
Rectangle::Rectangle(int l, int b)   
//accessing functions outside class using scope resoltion operator ::
{
    length=l;
    breath=b;
}

int Rectangle::area()
{
    return length*breath;
}

int Rectangle::perimeter()
{
    return 2*(length+breath);
}

Rectangle::~Rectangle()
{}

int main()
{
    Rectangle r(10,5);
    cout<<r.area()<<endl<<r.perimeter()<<endl;
    r.setLength(20);
    cout<<r.getLength();
}