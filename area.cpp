#include <iostream>

using namespace std;
class area {
private:
int length;
int width;
public:
void setLength(int l){
    length=l;
}
void setWidth(int w){
    width=w;
}
int getLength(){
    return length;
}
int getWidth(){
    return width;
}
};
int calculatearea(){
area a;
a.setLength(5);
a.setWidth(8);
cout<<a.getLength()<<"*"<<a.getWidth()<<endl;
cout<<"Area is: "<<a.getLength() * a.getWidth()<<endl;
return a.getLength() * a.getWidth();
}
int main(){

calculatearea();

}