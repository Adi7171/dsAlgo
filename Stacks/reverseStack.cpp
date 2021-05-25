#include<iostream>
#include<stack>
using namespace std;

void reverseSentence(string s){
    stack<string> st;
    string word = "";

    for(int i=0;i<s.length();i++){
        if(s[i]!=' '){
            word+=s[i];
        }
        else{
            st.push(word);
            word="";//If we dont use this then previous word is also stored
      
        }

   
    }
         st.push(word);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

}
int main(){
    string s = "Hey, how are you doing?";
    reverseSentence(s);
}