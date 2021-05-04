#include<iostream>
using namespace std;
/*BASICALLY YOU CAN CHANGE THE VALUES OF VARIABLES DIRECTLY IN MAIN FUNCTIONS*///THESE ARE CALLED ARGUMENTS
int sum(int a=110, int b=10, int c=20)
{
    return(a+b+c);
}
int main(){
    cout<<sum(1)<<endl;
    cout<<sum(1 , 2)<<endl;
    cout<<sum(1,2,3)<<endl;

    return 0;
}