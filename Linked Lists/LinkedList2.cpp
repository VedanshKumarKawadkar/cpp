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

void insertAtEnd(int val, node* &head){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void insertAtHead(int val, node* &head){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    n->next = head;
    head = n;
}

void display(node* head){
    if(head==NULL){
        cout<<"Empty Linked List!"<<endl;
        return;
    }
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}


void deleteNode(int val, node* &head){
    if(head == NULL){
        cout<<"Linked list is empty"<<endl;
        return;
    }
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
    head = todelete->next;
    delete todelete;
}

node* reverse_LinkedList_Iterative(node* &head){
    node* prev = NULL;
    node* curr = head;
    node* next;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

node* reverse_LinkedList_Recursive(node* &head){
    if(head == NULL || head->next==NULL){
        return head;
    }
    node* newhead = reverse_LinkedList_Recursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

int middleElement(node* &head){
    node* slow = head;
    node* fast = head;
    while((fast != NULL) && (fast->next != NULL)){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}

int main(){
    node* head = NULL;
    insertAtEnd(1, head);
    insertAtEnd(2, head);
    insertAtEnd(3, head);
    insertAtEnd(4, head);
    insertAtEnd(5, head);
    //insertAtEnd(6, head);
    display(head);
    insertAtHead(0, head);
    insertAtHead(-1, head);
    display(head);
    deleteNode(0, head);
    insertAtEnd(6, head);
    display(head);
    deleteHead(head);
    display(head);
    node* newhead = reverse_LinkedList_Iterative(head);
    display(newhead);
    node* newhead2 = reverse_LinkedList_Recursive(newhead);
    display(newhead2);
    cout<<middleElement(newhead2);
    return 0;
}