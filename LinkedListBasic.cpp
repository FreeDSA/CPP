#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtTail(node* &head,int val){
    
    node* n=new node(val);
    
    if(head==NULL){
        head=n;
        return;
    }
    
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
    
}

void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;

    // node n(val);
    // node* n1;
    // n1=&n;
    // n1->next=head;
    // head=n1;
    // delete n1;
    // return;

}

bool search(node* head,int key){
    node* temp=head;
    while(temp!=NULL){
        if((temp->data)==key){
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}

void deletion(node* &head,int val){
    node* temp=head;
    if(head==NULL){
        return;
    }

    if(temp->data==val){
        head=temp->next;
        delete temp;
        return;
    }
    while(((temp->next)->data)!=val){
        temp=temp->next;
    }
    node* todel=temp->next;
    temp->next=(temp->next)->next;
    delete todel;
}

int main(){
    node* head=NULL;
    // insertAtTail(head,1);
    // insertAtTail(head,2);
    // insertAtTail(head,3);
    
    display(head);

    // insertAtHead(head,4);
    insertAtHead(head,5);

    display(head);

    if(search(head,5)){
        cout<<"Key is present.";
    }
    else{
        cout<<"Key not present";
    }

    cout<<"\n";

    deletion(head,5);
    display(head);
        
    return 0;
}
