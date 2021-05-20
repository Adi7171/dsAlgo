#include <iostream>
using namespace std;

bool powerof2(int bit){
    // if( (bit & (bit-1)) == 0){
    //     return true;
    // }
    // else{
    //     return false;
    // } is same as below
    return ( bit && !(bit & (bit-1))); // here if we get value as zero the ! will make it true
    // here && is a logical operator it will check if left side is true or not.
    // If on LHS we have any other value except 0 it is true and then it checks for the RHS side to see if its true or not . If LHS is 0 then it wont bother checking the RHS side declae the result as false

}

int main(){
  cout<< powerof2(8)<<endl;;
}