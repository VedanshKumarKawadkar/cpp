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

void insert_at_end(int val, node* &head){
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

node* reverse_ll(node* &head){
    node* prev = NULL;
    node* curr = head;
    node* next;

    while (curr!=NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

node* reverse_ll_rec(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* temp = head;
    
    node* newhead = reverse_ll_rec(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

node* reverse_k_nodes(node* &head, int k){
    int x = 0;
    node* prev = NULL;
    node* curr = head;
    node* next;
    while(x!=k && curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        x++;
    }
    if(next!=NULL){
        head->next = reverse_k_nodes(next, k);
    }

    return prev;
}

node* reverse_k_nodes_groups(node* &head, int k){
    //if(head==NULL || head->next==NULL || k==1) return head;
    int x = 0;
    node* prev = NULL;
    node* curr = head;
    node* next;
    int l = 0;
    node* temp = head;
    while(temp!=NULL){
        l++;
        temp = temp->next;
    }

    int y = l/k;
    while(x!=k && curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        x++;
    }
    if(next!=NULL){
        cout<<prev->data<<" "<<curr->data<<" "<<next->data<<endl;
        head->next = next;
    }
    
    return prev;
}

node* reverse_nodes_in_range(node* &head, int l, int r){
    if(head==NULL || head->next==NULL || l==r) return head;
    node* n = new node(0);
    n->next = head;

    node* temp1 = n;
    int i = 1;
    while(i<l){
        temp1 = temp1->next;
    }
    
    node* temp2 = temp1->next;
    while(l<r){
        node* x = temp2->next;
        temp2->next = x->next;
        x->next = temp1->next;
        temp1->next = x;
        l++;
    }
    return n->next;

}

node* removeNthFromEnd(node* &head, int n){
    node* temp = head;
    int l = 0;
    while(temp!=NULL){
        l++;
        temp = temp->next;
    }

    if(n==l){
        node* todelete = head;
        head = todelete->next;
        delete todelete;
        return head;
    }

    else if(n==1){
        int cnt = 0;
        node* temp2 = head;
        while(temp2->next->next != NULL){
            temp2 = temp2->next;
        }
        node* todelete = temp2->next;
        temp2->next = NULL;
        delete todelete;
        return head;
    }

    else{
        int m = l-n+1;
        int cnt = 1;
        node* temp2 = head;
        while(cnt<m-1){
            temp2 = temp2->next;
            cnt++;
        }
        node* todelete = temp2->next;
        temp2->next = temp2->next->next;
        delete todelete;

        return head;
    }
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
    insert_at_end(1, head);
    insert_at_end(2, head);
    insert_at_end(3, head);
    insert_at_end(4, head);
    insert_at_end(5, head);
    insert_at_end(6, head);
    insert_at_end(7, head);
    insert_at_end(8, head);
    insert_at_end(9, head);
    insert_at_end(10, head);
    display(head);
    node* newhead1 = reverse_ll(head);
    display(newhead1);
    node* newhead2 = reverse_ll_rec(newhead1);
    display(newhead2);
    node* newhead3 = reverse_k_nodes(newhead2, 3);
    display(newhead3);
    node* newhead4 = reverse_k_nodes_groups(newhead3, 4);
    display(newhead4);
    node* newhead5 = reverse_nodes_in_range(newhead4, 1, 4);
    display(newhead5);
    return 0;

}