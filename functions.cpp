#include<iostream>
#include<cmath>
using namespace std;
int add(int a, int b)
{
    return (a + b);
}
int subtract (int a, int b)
{
    return (a - b);
}
int product ( int a , int b)
{
    return ( a*b);
}
int main(){
    cout<<" THE SUM OF 3 AND 4 IS "<<add( 3 , 4)<<endl;
    cout<<" THE DIFFRENCE OF 3 AND 4 IS "<<subtract( 3 , 4)<<endl;
    cout<<" THE PRODUCT OF 3 AND 4 IS "<<product( 3 , 4)<<endl;
    cout<<pow(2 , 5);

    return 0;
}