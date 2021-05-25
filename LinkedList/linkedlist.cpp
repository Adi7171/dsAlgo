#include <iostream>
using namespace std;

class node{
    public:
     int data;
     node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertatTail(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;

    while (temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;

}
void insertatHead(node* &head,int val){
     node* n = new node(val);
     n->next = head;
     head = n;
     return;
}

bool search(node* &head,int key){
    node* temp = head;
    while (temp!=NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;

}
void deleteAtHead(node* & head){
    node* todelete = head;
    head = head->next;
    delete todelete;
}

void deletion(node* &head,int val){
      node* temp = head;
      if(head == NULL){
          return;
      }
      if(head ->next == NULL){
          deleteAtHead(head);
          return;

      }

       while (temp!=NULL){
           if (temp->next->data == val){
               temp->next=temp->next->next;
           }
        temp = temp->next;
    }
}
node* reverse(node* &head){
    node* curr = head;
    node* prev = NULL;
    node* nextptr;

    while (curr!= NULL){
        nextptr = curr->next;
        curr->next = prev;

        prev = curr;
        
        curr= nextptr;

    }

    return prev;

}
void display(node* head){
     node* temp = head;

    while (temp!=NULL){
        cout<< temp->data << "->";
        temp = temp->next;
    }
    cout<<"NULL"<< endl;

}


int main(){
    node* head = NULL;
    insertatTail(head,1);
    insertatTail(head,2);
    insertatHead(head,4);
    display(head);
    // cout<< search(head ,2)<<endl;
    // cout<< search(head ,3)<<endl;
    // deletion(head,2);
    // display(head);
    node* newhead = reverse(head);
    display(newhead);
}