#include <iostream>
using namespace std;
#define n 100
class stack{
    int* arr;
    int top;
    public:
      stack(){
          arr = new int[n];
          top = -1;
      }    
      void push(int x){
          if(top == n-1){
              cout << "Stack Overflow"<<endl;
          }
          top++;
          arr[top] = x;
      }
      void pop(){
         if(top == -1){
             cout<< "Stack does not have any elements"<<endl;
         }
          top--;
      } 
      int Top(){
           if(top == -1){
             cout<< "Stack does not have any elements"<<endl;
         }
          return arr[top];
      }
     bool empty(){
     return top==-1;
      }

      void displayStack(){
          int s = top;
          cout<< "Top -> ";
          while(s!=-1){
              cout<< arr[s]<<"->";
              s--;
          }
          cout<<"Bottom reached" << endl;;
          return;
      }
};



int main()
{
    stack st;
    st.push(0);
    st.push(1);
    st.push(2);
    st.displayStack();
    st.pop();
    st.displayStack();
   



}