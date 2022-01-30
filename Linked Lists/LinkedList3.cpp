#include<iostream>
#include<algorithm>

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
    node *n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    n->next = head;
    head = n;
}

void display(node* &head){
    if(head == NULL){
        cout<<"Empty LL"<<endl;
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

node* reverse_LL_Iterative(node* &head){
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

node* reverse_LL_Recursive(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead = reverse_LL_Recursive(head->next);
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

node* reverse_K_nodes(node* &head, int k){
    int x = 0;
    node* prev = NULL;
    node* curr = head;
    node* next;
    while(curr!=NULL && x<k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        x++;
    }

    if(next!=NULL){
        head->next = reverse_K_nodes(next, k);
    }

    return prev;
}

void makeCycle(node* &head, int pos){
    node* temp = head;
    node* startNode;
    int n = 1;
    while(temp->next != NULL){
        if(n == pos){
            startNode = temp;
        }
        temp = temp->next;
        n++;
    }
    temp->next = startNode;
}

bool detectCycle(node* &head){
    node* slow = head;
    node* fast = head;
    while(fast != NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow){
            return true;
        }
    }
    return false;
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
    node* newhead = reverse_LL_Iterative(head);
    display(newhead);
    node* newhead2 = reverse_LL_Recursive(newhead);
    display(newhead2);
    cout<<middleElement(newhead2)<<endl;
    node* newhead3 = reverse_K_nodes(newhead2, 4);
    display(newhead3);
    makeCycle(newhead3, 3);
    //display(newhead3);
    cout<<detectCycle(newhead3)<<endl;
    return 0;
}