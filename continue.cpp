#include<iostream>
using namespace std;
int main(){
    for (int num=0; num<=6; num++) {
      /* This means that when the value of
       * num is equal to 3 this continue statement
       * would be encountered, which would make the
       * control to jump to the beginning of loop for
       * next iteration, skipping the current iteration
       */ 
     
      if (num==3) {
          continue;
      }
      cout<<num<<" ";
   }

    
    return 0;
}