#include <iostream>
using namespace std;

int main(){
    string A = "740984";

    int i,j,n=A.length();
    string z ="-1";
    for(i=n-1;i>0;i--)
       if(A[i]>A[i-1])
           break;

    cout<<i ;
           
    // if(i==0){
    //     cout<<z;
    // }
    
    // int x = A[i-1], smallest = i;
    //  for(j=i+1;j<n;j++){
    //      if(A[j]>x && A[j]<A[smallest]){
    //          smallest = j;
    //      }
    //  }
     
    //  swap(A[i-1],A[smallest]);
     
    // //  sort(A.begin()+i , A.end());
     
    //  cout<<A<<endl;
     
     
    

}