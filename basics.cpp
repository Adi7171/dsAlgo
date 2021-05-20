#include <iostream>
using namespace std;

int getBit(int bit, int pos){
    return((bit&(1<<pos))!=0); // here we check whether the resultant bit is 0000 if it not 0000 then that means that at that pos it contains 1 
    // what bit is the at which pos  3210 <- 1111 order

}

int setBit(int bit , int pos){
    return(bit | (1<<pos)); // here we are  bit 1 at a partiular position
}

int clearBit(int bit , int pos){
    int mask = ~(1<<pos);// here 0100 becomes 1011
    return(bit & mask);// here we make a bit at a particular position as 0
}

int updateBit(int bit, int pos,int value){
    int mask = ~(1<<pos);// first we clear the bit  
    bit = bit & mask;
    return(bit | (value<<pos));// then we what bit to put at that position 0 or 1

}

int main(){
    cout<< getBit(5,2)<<endl;
    cout<< getBit(2,1)<<endl;
    cout<< setBit(5,1)<<endl;
    cout<< clearBit(5,2)<<endl;
    cout<< updateBit(5,3,1)<<endl;
}