#include<iostream>
using namespace std;
int main(){
    bool b1 = true;
   bool b2 = false;
   cout<<"b1 && b2: "<<(b1&&b2)<<endl;
   cout<<"b1 || b2: "<<(b1||b2)<<endl;
   cout<<"!(b1 && b2): "<<!(b1&&b2);
    return 0;
}