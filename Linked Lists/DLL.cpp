#include<iostream>
#include<algorithm>

using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        prev = NULL;
        data = val;
        next = NULL;
    }
};

void insert_at_head(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head=n;
        return;
    }
    n->next = head;
    head->prev = n;
    head = n;
    
}

void insert_at_ending(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        insert_at_head(head, val);
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;
}

void display(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head = NULL;
    insert_at_ending(head, 1);
    insert_at_ending(head, 3);
    display(head);
    insert_at_head(head, 4);
    insert_at_head(head, 2);
    display(head);
    cout<<head->next->data<<endl;
    cout<<(head->next->prev->data)<<endl;


    return 0;
}