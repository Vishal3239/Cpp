#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
        int data;
        Node* next;
        Node(int val ){
            data = val;
            next = NULL;
        }
};
int main(){
    Node *head = new Node(10);
    
    
    // insert begining
    Node *begin = new Node(20);
    begin->next = head;
    head=begin;

    Node* temp = head;
    // insert last 
    Node* end = new Node(30);
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=end;


    Node* temps = head;
    while(temps!=NULL){
        cout<<temps->data<<" ";
        temps=temps->next;
    }
    
    return 0;
}