#include <iostream>
using namespace std;

struct Rectangle
{
    
    int length;
    int breadth;
};
    
    
    void initialize(struct Rectangle *r,int l, int b){
        //cout<<"Enter l and b:"<<endl;
        //cin>>l>>b;
        r->length=l;
        r->breadth=b;
    }
    void area(struct Rectangle r){
        int area=r.length*r.breadth;
        cout<<"Area:"<<endl<<area<<endl;
    }
    void perimeter(struct Rectangle r){
        int perimeter=2*(r.length+r.breadth);
        cout<<"Perimeter:"<<endl<<perimeter<<endl;
    }


int main()
{
    struct Rectangle r={10,5};
    area(r);
    perimeter(r);
    return 0;
}

