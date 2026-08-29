#include <iostream>

using namespace std;
int main(){
cout<<"enter your three numbers "<<endl;
int x,y,z;
cin>>x>>y>>z;
if (x>y &&x>z){
    cout<<x<<" is the largest number"<<endl;
}
else if (y>z){
    cout<<y<<" is the largest number"<<endl;
}
else {
    cout<<z<<" is the largest number"<<endl;
}

}