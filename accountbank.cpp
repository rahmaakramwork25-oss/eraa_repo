#include <iostream>

using namespace std;
class bankaccount{
private:
int accountnumber;
int balance;
public:
void setAccountnumber(int a){
    accountnumber=a;
}
   void setBalance(int b){
    balance=b;
   }
    int getAccountnumber(){
        return accountnumber;
    }
    int getBalance(){
        return balance;
    }
};
void displayinfo()
{
bankaccount d;
int a;
int b;
cin>>a>>b;
d.setAccountnumber(a);
d.setBalance(b);

cout<<"your account bank is "<<d.getAccountnumber()<<endl;
cout<<"your balanc is "<<d.getBalance()<<endl;

}
int main(){

    displayinfo();
}