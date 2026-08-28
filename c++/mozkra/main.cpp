#include <iostream>

using namespace std;
class car {
private:
string brand;
string model;
int year;
public:
void setBrand(string b){
    brand = b;

}
void setModel(string m){
    model = m;
}
void setYear(int y){
    year = y;
}
string getBrand(){
    return brand;
}
string getModel(){
    return model;
}
int getYear(){
    return year;
}
 void displayinfo(){
     car c;
    c.setBrand("toyota");
    c.setModel("camty");
    c.setYear(2026);
    cout<<c.getBrand()<<endl;
    cout<<c.getModel()<<endl;
    cout<<c.getYear()<<endl;

}
int main(){

    displayinfo(car c);
    }








