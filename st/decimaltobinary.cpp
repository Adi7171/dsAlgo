#include <iostream>
using namespace std;

int main(){
    int dec = 45,rem;
    string bin="";

    while(dec>0){
        rem=dec%2;
        dec=dec/2;
        bin+=to_string(rem);
    }
    cout<< bin <<endl;


    
}