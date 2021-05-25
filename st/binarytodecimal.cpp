#include <iostream>
using namespace std;



int main(){
    int bin = 1010101,rem,i=0,dec=0;
    while(bin >0){
       
        rem = bin%10;
        bin /= 10;
        if(rem==1){
            dec += pow(2,i);
        }
        i++;
    }
    cout<< dec <<endl;

    
}