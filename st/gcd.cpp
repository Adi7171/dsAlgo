 #include <iostream>
using namespace std;

int gcd(int a ,int b){
     if(b==0){// Here we are taking only b as zero because a will be be give us gcd when we keep on dividing till b =0
          return a;
      }
      return gcd(b,a%b); 

      // Another way of doing it is by taking 

      
    //   if (a==0){
    //       return b;
    //   }
    //   return gcd(b%a,a)
    
}


int main(){
 int A=7,B=9;
 cout<<gcd(A,B)<<endl;     
   

} 
