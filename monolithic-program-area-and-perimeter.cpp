#include <iostream>

using namespace std;

int main()
{
    int length=0,breadth=0;
    cout<<"Enter length and breadth:\n";
    cin>>length>>breadth;
    
    int area = length*breadth;
    int perimeter = 2*(length+breadth);
    
    cout<<area<<endl<<perimeter;

    return 0;
}
