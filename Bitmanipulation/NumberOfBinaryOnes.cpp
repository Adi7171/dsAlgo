#include <iostream>
using namespace std;

int numberofOnes(int n){
    int c=0;
    while(n){
        n = n & (n-1);
        c++;
    }
    return c;
}


int main(){
    cout<< numberofOnes(6)<<endl;

}
