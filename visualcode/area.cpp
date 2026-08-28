 #include <iostream>

using namespace std;
class reactangle{
private:
int length;
int width;
public:
void setLength(int L){
    length = L;
}
void setWidth(int W){
    width = W;
}
int getLength(){
    return length;
}
int getWidth(){
    return width;
}
int calculatearea(int a){
    reactangle r;
    r.setLength(5);
    r.setWidth(10);
    a = r.getLength()*r.getWidth();
    return a;
}

};
int main(){
    reactangle r;
    int area = 0;
    cout<<r.calculatearea(area);
}