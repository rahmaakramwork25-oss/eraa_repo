#include <iostream>
using namespace std;



int main()
{
   cout<< "calculate the max"<<endl;
   int x,z,y;
   cout<<"x=";
   cin>>x;
   cout<<"y=";
   cin>>y;
   cout<<"z=";
   cin>>z;
   if(x>y && x>z){
    cout<< "x is max";
   }
   else if (y>x && y>z){
    cout <<"y is max";
   }
   else {
    cout<<"z is max";
   }
    return 0;

}
