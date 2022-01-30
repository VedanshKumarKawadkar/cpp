#include<iostream>

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

void insertAtEnd(int val, node* &head){
    node* n = new node(val);
    node* temp = head;
    if(head==NULL){
        head = n;
        return;
    }

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = n;
}

void insertAtBeginning(int val, node* &head){
    node* n = new node(val);
    n->next = head;
    head = n;
}

void deleteNode(int val, node* &head){
    node* temp = head;
    while(temp->next->data != val){
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

void deleteHead(node* &head){
    node* todelete = head;
    head = head->next;
    delete todelete;
}

void print(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"=>";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head = NULL;
    insertAtBeginning(2, head);
    insertAtEnd(3, head);
    insertAtBeginning(1, head);
    print(head);
    deleteNode(2, head);
    print(head);
    deleteHead(head);
    print(head);

}